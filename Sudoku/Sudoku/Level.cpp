#include "pch.h"
#include "Level.h"
#include <iostream>
#include <windows.h>
#define LEVEL1 46
#define LEVEL2 51
#define LEVEL3 54

using namespace std;

int Level::DecisionBlankNum() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "                     _         _ " << endl <<
		"                    | |       | |" << endl <<
		"     ____ _    _   _| | ____  | | ___  _   _" << endl <<
		"    / ___| |  | |/ _  |/ __ ��| |/  / | | | |" << endl <<
		"    ��__ ��|__| | (_| || (_) ||   <   | |_| |" << endl <<
		"    |____/��____/��___|��____/|_|��_����____/" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << endl << "    ����";	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "[1]";	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << ", �߰�";	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "[2]"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << ", �����"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "[3]" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	cout << "    ���̵��� ���� �Ͻÿ� : ";
	cin >> Level;

	if (Level == 1)
		NumberOfBlank = LEVEL1;
	else if (Level == 2)
		NumberOfBlank = LEVEL2;
	else if (Level == 3)
		NumberOfBlank = LEVEL3;
	else
		DecisionBlankNum();

	return NumberOfBlank;
}