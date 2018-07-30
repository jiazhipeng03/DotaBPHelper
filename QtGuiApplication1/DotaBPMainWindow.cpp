#include "DotaBPMainWindow.h"
#include <qstandarditemmodel.h>
#include "XMLParser/rapidxml.hpp"
#include "XMLParser/rapidxml_utils.hpp"
DotaBPMainWindow::DotaBPMainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	InitConnection();
 	const char* filename = "new.xml";
	std::string appPath = qApp->applicationDirPath().toStdString() + "/" + filename;
// 	LoadCSV(filename, m_HeroTable);
	LoadXML(appPath.c_str());
	RefreshTable();
}

void DotaBPMainWindow::InitConnection()
{
	connect(ui.lineEdit_My1, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_My2, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_My3, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_My4, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
// 	connect(ui.lineEdit_My5, SIGNAL(editingFinished()), this, SLOT(OnEditFinished()));
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
	dataModel->setHorizontalHeaderItem(0, new QStandardItem(QString::fromLocal8Bit("克制")));
	dataModel->setHorizontalHeaderItem(1, new QStandardItem(QString::fromLocal8Bit("被克制")));
	dataModel->setHorizontalHeaderItem(2, new QStandardItem(QString::fromLocal8Bit("队友")));
	// Load current hero
	string hero = ui.lineEdit_My1->text().toUtf8();
	int row = 0;
	if (m_HeroTable.find(hero) == m_HeroTable.end())
		return;

	for (int i = 0; i < 5; ++i)
	{
		QString qHero = QString::fromUtf8(m_HeroTable[hero].BestVersus[i].c_str());
		dataModel->setItem(i, 0, new QStandardItem(qHero));
		qHero = QString::fromUtf8(m_HeroTable[hero].WorstVersus[i].c_str());
		dataModel->setItem(i, 1, new QStandardItem(qHero));
		qHero = QString::fromUtf8(m_HeroTable[hero].BestTeammate[i].c_str());
		dataModel->setItem(i, 2, new QStandardItem(qHero));
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
			Hero& h = m_HeroTable[heroName];
			h.BestVersus[i] = bestVNode->value();
			bestVNode = bestVNode->next_sibling("BestVersus");
			++i;
		}

		i = 0;
		xml_node<>* WorstVersusNode = heroNode->first_node("WorstVersus");
		while (WorstVersusNode)
		{
			Hero& h = m_HeroTable[heroName];
			h.WorstVersus[i] = WorstVersusNode->value();
			WorstVersusNode = WorstVersusNode->next_sibling("WorstVersus");
			++i;
		}

		i = 0;
		xml_node<>* BestTeammateNode = heroNode->first_node("BestTeammate");
		while (BestTeammateNode)
		{
			Hero& h = m_HeroTable[heroName];
			h.BestTeammate[i] = BestTeammateNode->value();
			BestTeammateNode = BestTeammateNode->next_sibling("BestTeammate");
			++i;
		}
		heroNode = heroNode->next_sibling("HeroName");
	}
}
