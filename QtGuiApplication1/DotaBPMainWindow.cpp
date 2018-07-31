#include "DotaBPMainWindow.h"
#include <qstandarditemmodel.h>
#include "XMLParser/rapidxml.hpp"
#include "XMLParser/rapidxml_utils.hpp"
DotaBPMainWindow::DotaBPMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
 	const char* filename = "new.xml";
	std::string appPath = qApp->applicationDirPath().toStdString() + "/" + filename;
// 	LoadCSV(filename, m_HeroTable);
	LoadXML(appPath.c_str());
	

	for (int i = 0; i < HEROCOUNT; ++i)
	{
		m_MyTeamEdit[i] = NULL;
		QString childName("lineEdit_My");
		childName += QString::number(i+1);
		m_MyTeamEdit[i] = (ui.centralWidget->findChild<QLineEdit*>(childName));
	}
	for (int i = 0; i < HEROCOUNT; ++i)
	{
		m_OpEdit[i] = NULL;
		QString childName("lineEdit_Op");
		childName += QString::number(i + 1);
		m_OpEdit[i] = (ui.centralWidget->findChild<QLineEdit*>(childName));
	}
	for (int i = 0; i < BANCOUNT; ++i)
	{
		m_BannedEdit[i] = NULL;
		QString childName("lineEdit_Ban");
		childName += QString::number(i + 1);
		m_BannedEdit[i] = (ui.centralWidget->findChild<QLineEdit*>(childName));
	}
	InitConnection();
	RefreshTable();
	
	m_BPSequence.push_back(BPSequence(MyBan, 1));
	m_BPSequence.push_back(BPSequence(OpBan, 1));
	m_BPSequence.push_back(BPSequence(MyBan, 2));
	m_BPSequence.push_back(BPSequence(OpBan, 2));
	m_BPSequence.push_back(BPSequence(MyBan, 3));
	m_BPSequence.push_back(BPSequence(OpBan, 3));

	m_BPSequence.push_back(BPSequence(MyPick, 1));
	m_BPSequence.push_back(BPSequence(OpPick, 1));
	m_BPSequence.push_back(BPSequence(OpPick, 2));
	m_BPSequence.push_back(BPSequence(MyPick, 2));

	m_BPSequence.push_back(BPSequence(MyBan, 4));
	m_BPSequence.push_back(BPSequence(OpBan, 4));
	m_BPSequence.push_back(BPSequence(MyBan, 5));
	m_BPSequence.push_back(BPSequence(OpBan, 5));

	m_BPSequence.push_back(BPSequence(OpPick, 3));
	m_BPSequence.push_back(BPSequence(MyPick, 3));
	m_BPSequence.push_back(BPSequence(OpPick, 4));
	m_BPSequence.push_back(BPSequence(MyPick, 4));

	m_BPSequence.push_back(BPSequence(OpBan, 6));
	m_BPSequence.push_back(BPSequence(MyBan, 6));

	m_BPSequence.push_back(BPSequence(MyPick, 5));
	m_BPSequence.push_back(BPSequence(OpPick, 5));
}

void DotaBPMainWindow::InitConnection()
{
	for (int i = 0; i < HEROCOUNT; ++i)
	{
		connect(m_MyTeamEdit[i], SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
		connect(m_OpEdit[i], SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
	}
	for (int i=0; i<BANCOUNT; ++i)
		connect(m_BannedEdit[i], SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));

// 	connect(ui.lineEdit_My2, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_My3, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_My4, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_MyHEROCOUNT, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
}

void DotaBPMainWindow::OnEditFinished()
{
	RefreshTable();
}

void DotaBPMainWindow::LoadCSV(const char* filename, vector<vector<string>>& OutTable)
{
	// 读文件
	std::string appPath = qApp->applicationDirPath().toStdString() + "/" + filename;
	ifstream inFile(appPath, ios::in);
	string lineStr;
//	vector<vector<string>> OutTable;
	while (getline(inFile, lineStr))
	{
		// 打印整行字符串
		cout << lineStr << endl;
		// 存成二维表结构
		stringstream ss(lineStr);
		string str;
		vector<string> lineArray;
		// 按照逗号分隔
		while (getline(ss, str, ','))
			lineArray.push_back(str);
		OutTable.push_back(lineArray);
	}
}

void DotaBPMainWindow::RefreshTable()
{
	QStandardItemModel* dataModel = new QStandardItemModel;
	ui.tableView->setModel(dataModel);
	dataModel->setHorizontalHeaderItem(0, new QStandardItem(QString::fromLocal8Bit("Pick")));
	dataModel->setHorizontalHeaderItem(1, new QStandardItem(QString::fromLocal8Bit("Ban")));
	//dataModel->setHorizontalHeaderItem(2, new QStandardItem(QString::fromLocal8Bit("队友")));

	GetHeroList();

	if (m_PickList.empty() && m_BanList.empty())
		return;
	
	typedef std::pair<string, int> PAIR;
	struct CmpByValue
	{
		bool operator()(const PAIR& lhs, const PAIR& rhs) const
		{
			return lhs.second > rhs.second;
		}
	};
	vector<PAIR> PickList(m_PickList.begin(), m_PickList.end());
	sort(PickList.begin(), PickList.end(), CmpByValue());
	for (int i=0; i<PickList.size(); ++i)
	{
		string name = PickList[i].first;
		dataModel->setItem(i, 0, new QStandardItem(QString::fromUtf8(name.c_str())));
	}
	vector<PAIR> BanList(m_BanList.begin(), m_BanList.end());
	sort(BanList.begin(), BanList.end(), CmpByValue());
	for (int i = 0; i < BanList.size(); ++i)
	{
		string name = BanList[i].first;
		dataModel->setItem(i, 1, new QStandardItem(QString::fromUtf8(name.c_str())));
	}
}

void DotaBPMainWindow::LoadXML(const char* filename)
{
	using namespace rapidxml;
	file<> f(filename);
	xml_document<> doc;
	doc.parse<0>(f.data());
	xml_node<>* root = doc.first_node();
	xml_node<>* heroNode = root->first_node("HeroName");
	while(heroNode)
	{
		string heroName = heroNode->value();
		int i = 0;
		xml_node<>* bestVNode = heroNode->first_node("BestVersus");
		while (bestVNode)
		{
			RelatedHero& h = m_HeroTable[heroName];
			h.BestVersus[i] = bestVNode->value();
			bestVNode = bestVNode->next_sibling("BestVersus");
			++i;
		}

		i = 0;
		xml_node<>* WorstVersusNode = heroNode->first_node("WorstVersus");
		while (WorstVersusNode)
		{
			RelatedHero& h = m_HeroTable[heroName];
			h.WorstVersus[i] = WorstVersusNode->value();
			WorstVersusNode = WorstVersusNode->next_sibling("WorstVersus");
			++i;
		}

		i = 0;
		xml_node<>* BestTeammateNode = heroNode->first_node("BestTeammate");
		while (BestTeammateNode)
		{
			RelatedHero& h = m_HeroTable[heroName];
			h.BestTeammate[i] = BestTeammateNode->value();
			BestTeammateNode = BestTeammateNode->next_sibling("BestTeammate");
			++i;
		}
		heroNode = heroNode->next_sibling("HeroName");
	}
}

void DotaBPMainWindow::GetHeroList()
{
	m_PickList.clear();
	m_BanList.clear();

	vector<string> SelectedList;
	for (int i = 0; i < HEROCOUNT; ++i)
	{
		SelectedList.push_back(string(m_MyTeamEdit[i]->text().toUtf8()));
		SelectedList.push_back(string(m_OpEdit[i]->text().toUtf8()));
	}
	for (int i = 0; i < BANCOUNT; ++i)
		SelectedList.push_back(string(m_BannedEdit[i]->text().toUtf8()));

	for (int i = 0; i < HEROCOUNT; ++i)
	{
		std::string myTeam = m_MyTeamEdit[i]->text().toUtf8();
		if (m_HeroTable.find(myTeam) == m_HeroTable.end())
			continue;
		for (int j = 0; j < HEROCOUNT; ++j)
		{
			string bestT = m_HeroTable[myTeam].BestTeammate[j];
			m_PickList[bestT]++;
		}
		for (int j = 0; j < HEROCOUNT; ++j)
		{
			string bestT = m_HeroTable[myTeam].WorstVersus[j];
			m_BanList[bestT]++;
		}
		for (int j = 0; j < HEROCOUNT; ++j)
		{
			string bestT = m_HeroTable[myTeam].BestVersus[j];
			m_PickList[bestT]++;
		}
	}
	for (int i = 0; i < HEROCOUNT; ++i)
	{
		std::string opTeam = m_OpEdit[i]->text().toUtf8();
		if (m_HeroTable.find(opTeam) == m_HeroTable.end())
			continue;
		for (int j = 0; j < HEROCOUNT; ++j)
		{
			string bestT = m_HeroTable[opTeam].BestTeammate[j];
			m_BanList[bestT]++;
		}
		for (int j = 0; j < HEROCOUNT; ++j)
		{
			string bestT = m_HeroTable[opTeam].WorstVersus[j];
			m_PickList[bestT]++;
		}
		for (int j = 0; j < HEROCOUNT; ++j)
		{
			string bestT = m_HeroTable[opTeam].BestVersus[j];
			m_BanList[bestT]++;
		}
	}
	for (auto it : SelectedList)
	{
		if (m_PickList.find(it) != m_PickList.end())
		{
			m_PickList.erase(it);
		}
		if (m_BanList.find(it) != m_BanList.end())
		{
			m_BanList.erase(it);
		}
	}
}
