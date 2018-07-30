#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DotaBPMainWindow.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
using namespace std;
struct Hero
{
	string BestVersus[5];
	string WorstVersus[5];
	string BestTeammate[5];
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
	void RefreshTable();
	void LoadXML(const char* filename);
private:
	Ui::DotaBPMainWindowClass ui;

	map<string, Hero> m_HeroTable;
};
