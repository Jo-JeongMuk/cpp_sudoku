#include "pch.h"
#include "input.h"
#include <iostream>

using namespace std;

void Input::init()
{
	cout << "�Է��ϰ��� �ϴ� ��/��/���� �Է����ּ��� : ";
	cin >> this->row >> this->coloum >> this->value;

	cout << this->row << this->coloum << this->value << endl;
}
bool Input::ExpectionCheck()
{
	if (this->row < 1 || this->row > 9)
	{
		cout << "�� �࿡�� 1~9������ ���� �����մϴ�. �ٽ� �Է��ϼ���" << endl;
		return false;
	}

	else if (this->coloum < 1 || this->coloum > 9)
	{
		cout << "�� ������ 1 ~ 9 ������ ���� �����մϴ�" << endl;
		return false;
	}

	else if (this->value < 1 || this->value > 9)
	{
		cout << "1 ~ 9 ������ ���� �Է��� �� �ֽ��ϴ�." << endl;
		return false;
	}
	
	return true;
}

bool Input::DuplicateCheck()
{
	Question q;
	for(int )
	return true;
}

bool Input::NumbofBlankCheck()
{
	if (Question->NumberofBlank == this -> count)
		return false;

	return true;
}

void Input::FillintheBlank()
{
	Question.row = this->row;
	Question.colum = this->coloum;
	Question.value = this->value;
	// board.board(this -> row, this -> col, this -> value);
	= this->data;

	count++;
}

void Input::reset()
{
}