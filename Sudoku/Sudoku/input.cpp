#include "pch.h"
#include "input.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Input::Input()
: cnt(0){}

void Input::init()
{
	char initData[6];
	cout << endl;
	cout << "  �Է��ϰ��� �ϴ� ��/��/���� �Է����ּ���! : ";
	cin >> initData;
	if (initData[0] == 'q' || initData[0] == 'Q')
		this->UserMode = RETURN_TO_MAIN;
	else if (initData[0] == 'w' || initData[0] == 'W')
		this->UserMode = RESET_GAME;
	else if (initData[0] == 'e' || initData[0] == 'E')  
		this->UserMode = EXIT_GAME;
	else
	{
		this->row = initData[0];
		this->column = initData[2];
		this->value = initData[4];
	}
}

bool Input::ExpectionCheck()
{
	if (this->row < '1' || this->row > '9' || this->column < '1' || this->column > '9' || this->value < '0' || this->value > '9')
	{
		cout << endl;
		cout << "  �߸��� ���Դϴ�. �ٽ� �Է��� �ּ���." << endl;
		Sleep(1000);
		return false;
	}
	return true;
}

bool Input::DuplicateCheck()
{
	if (questionsheet[this->column - 1][this->row - 1] != '0')
	{
		cout << endl;
		cout << "  �ش� ĭ���� �̹� ���� �ֽ��ϴ�! �ٽ� �Է����ּ���!" << endl;
		Sleep(1000);
		return false;
	}
	if (value != '0')
		for (int i = 0; i < 9; ++i)
			if (worksheet[(int)this->column - 1][(int)i] == value || worksheet[(int)i][(int)this->row - 1] == value || questionsheet[(int)this->column - 1][(int)i] == value || questionsheet[(int)i][(int)this->row - 1] == value)
			{
				cout << endl;
				cout << "  �ߺ����� �����մϴ�. �ٽ� �Է����ּ���!" << endl;
				Sleep(1000);
				return false;
			}
	return true;
}

char& Input::FillintheBlank()
{
	if (worksheet[this->column - 1][this->row - 1] == '0')
		cnt++;
	return worksheet[this->column - 1][this->row - 1] = this->value;
}
/*
bool Input::ResetCheck()
{
	if (this->row == '0' && this->column == '0' && this->value == '0')
	{
		reset();
		return true;
	}
	return false;
}

bool Input::InterruptCheck()
{
	if (this->row == '10' && this->column == '10' && this->value == '10')
		return true;
	return false;
}
*/
bool Input::NumbofBlankCheck()
{
	if (cnt == NumberOfBlank)
		return true;
	return false;
}

void Input::reset()
{
	for (int i = 0; i < COLUME; i++)
		for (int j = 0; j < ROW; j++)
			worksheet[i][j] = '0';
	cnt = 0;
}