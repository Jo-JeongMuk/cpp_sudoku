#include "pch.h"
#include "Level.h"
#include <iostream>
#include <windows.h>

using namespace std;

int Level::DecisionBlankNum() {
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	cout << endl << "  v 1.1" << endl << endl << endl << endl << endl << endl << endl << endl;
	cout <<
		"                                         _         _ " << endl <<
		"                                        | |       | |" << endl <<
		"                         ____ _    _   _| | ____  | | ___  _   _" << endl <<
		"                        / ___| |  | |/ _  |/ __ ��| |/  / | | | |" << endl <<
		"                        ��__ ��|__| | (_| || (_) ||   <   | |_| |" << endl <<
		"                        |____/��____/��___|��____/|_|��_����____/" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	cout << endl << "                              ����";	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTGREEN);
	cout << "[1]";	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	cout << ", �߰�";	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTGREEN);
	cout << "[2]"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	cout << ", �����"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), LIGHTGREEN);
	cout << "[3]" << endl; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	cout << "                               ���̵��� �Է� �Ͻÿ� : ";
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