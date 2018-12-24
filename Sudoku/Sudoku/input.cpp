#include "pch.h"
#include "input.h"
#include <iostream>
#include <Windows.h>

using namespace std;

Input::Input()
{
	this->row = row;
	this->column = column;
	this->value = value;
	this->cnt = 0;
}

void Input::init()
{
	cout << endl;
	cout << "  �Է��ϰ��� �ϴ� ��/��/���� �Է����ּ���! : ";
	cin >> this->row >> this->column >> this->value;
}
bool Input::ExpectionCheck()
{
	if (this->row < 1 || this->row > 9)
	{
		cout << endl;
		cout << "  �� �࿡�� 1~9������ ���� �����մϴ�." << endl;
		Sleep(1000);
		return false;
	}
	else if (this->column < 1 || this->column > 9)
	{
		cout << endl;
		cout << "  �� ������ 1 ~ 9 ������ ���� �����մϴ�" << endl;
		Sleep(1000);
		return false;
	}
	else if (this->value < 0 || this->value > 9)
	{
		cout << endl;
		cout << "  0 ~ 9 ������ ���� �Է��� �� �ֽ��ϴ�." << endl;
		Sleep(1000);
		return false;
	}
	return true;
}

bool Input::DuplicateCheck()
{
	if (questionsheet[this->column - 1][this->row - 1] != 0)
	{
		cout << endl;
		cout << "  �ش� ĭ���� �̹� ���� �ֽ��ϴ�! �ٽ� �Է����ּ���!" << endl;
		Sleep(1000);
		return false;
	}
	if (value != 0)
		for (int i = 0; i < 9; i++)
			if (worksheet[this->column - 1][i] == value || worksheet[i][this->row - 1] == value)
			{
				cout << endl;
				cout << "  �ߺ����� �����մϴ�. �ٽ� �Է����ּ���!" << endl;
				Sleep(1000);
				return false;
			}

	return true;
}

int& Input::FillintheBlank()
{
	if (value != 0)
		++cnt;
	return worksheet[this->column - 1][this->row - 1] = this->value;
}

bool Input::ResetCheck()
{
	if (this->row == 0 && this->column == 0 && this->value == 0)
	{
		reset();
		return true;
	}
	return false;
}

bool Input::InterruptCheck()
{
	if (this->row == 10 && this->column == 10 && this->value == 10)
		return true;
	return false;
}

bool Input::NumbofBlankCheck()
{
	if (cnt != NumberOfBlank)
		return false;

	return true;
}

void Input::reset()
{
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++)
			worksheet[i][j] = 0;
}