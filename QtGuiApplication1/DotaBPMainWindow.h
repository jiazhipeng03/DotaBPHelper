#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DotaBPMainWindow.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
#define HEROCOUNT 5
#define BANCOUNT 12

struct RelatedHero
{
	string BestVersus[HEROCOUNT];
	string WorstVersus[HEROCOUNT];
	string BestTeammate[HEROCOUNT];
};

enum BPType
{
	MyPick,
	OpPick,
	MyBan,
	OpBan,
};
struct BPSequence
{
	BPType type;
	int index;
	BPSequence(BPType InType = MyPick, int InIndex = 0) :type(InType), index(InIndex) {};
};

class DotaBPMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	DotaBPMainWindow(QWidget *parent = Q_NULLPTR);

	void InitConnection();
	public slots:
	void OnEditFinished();
	void LoadCSV(const char* filename, vector<vector<string>>& OutTable);
	// ��ȡ�������е�����Ӣ�ۣ��оٹ�ϵӢ�۲���¼�������������ban�е�Ӣ��������
	void RefreshTable();
	void LoadXML(const char* filename);
	void GetHeroList();
private:
	Ui::DotaBPMainWindowClass ui;

	QLineEdit* m_MyTeamEdit[HEROCOUNT];
	QLineEdit* m_OpEdit[HEROCOUNT];
	QLineEdit* m_BannedEdit[BANCOUNT];
	
	map<string, int> m_PickList;
	map<string, int> m_BanList;

	map<string, RelatedHero> m_HeroTable;

	vector<BPSequence> m_BPSequence;
};
