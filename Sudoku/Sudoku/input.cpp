#include "pch.h"
#include "input.h"
#include <iostream>
#include <string.h>
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
	cout << "�Է��ϰ��� �ϴ� ��/��/���� �Է����ּ��� : ";
	cin >> this->row >> this->column >> this->value;
}
bool Input::ExpectionCheck()
{
	if (this->row < 1 || this->row > 9)
	{
		cout << "�� �࿡�� 1~9������ ���� �����մϴ�." << endl;
		Sleep(1000);
		return false;
	}

	else if (this->column < 1 || this->column > 9)
	{
		cout << "�� ������ 1 ~ 9 ������ ���� �����մϴ�" << endl;
		Sleep(1000);
		return false;
	}

	else if (this->value < 1 || this->value > 9)
	{
		cout << "1 ~ 9 ������ ���� �Է��� �� �ֽ��ϴ�." << endl;
		Sleep(1000);
		return false;
	}

	return true;
}

bool Input::DuplicateCheck()
{
	if (questionsheet[this->row - 1][this->column - 1] != 0)
	{
		cout << "�ش� ĭ���� �̹� ���� �ֽ��ϴ�! �ٽ� �Է����ּ���!" << endl;
		Sleep(1000);
		return false;
	}

	for (int i = 0; i < 9; i++)
		if (worksheet[this->row - 1][i] == value || worksheet[i][this->column - 1] == value)
		{
			cout << "�ߺ����� �����մϴ�. �ٽ� �Է����ּ���!" << endl;
			Sleep(1000);
			return false;
		}

	return true;
}

int& Input::FillintheBlank()
{
	++cnt;
	return worksheet[this->row - 1][this->column - 1] = this->value;
}

bool Input::NumbofBlankCheck()
{
	if (cnt != NumberofBlank)
		return false;

	return true;
}


void Input::reset()
{
	Question::copy();
}

void Input::countprint()
{
	cout << this->cnt << endl;
}

Input::~Input()
{
}
