#include "pch.h"
#include "Level.h"
#include  <iostream>

using namespace  std;


Level::Level()
{
}

int& Level::DecisionBlankNumber()
{
	int tmp;
	while (true)
	{
		cout << "������ �����ϼ���! : ";
		cin >> tmp;
		if (tmp == 1)
		{
			NumberofBlank = 30;
			break;
		}
		else if (tmp == 2)
		{
			NumberofBlank = 40;
			break;
		}
		else if (tmp == 3)
		{
			NumberofBlank = 50;
			break;
		}
		else
			cout << "������ 1 ~ 3 ���� ���ڷθ� �����մϴ�! �ٽ� �Է����ּ���." << endl;
	}
	return this->NumberofBlank;
}

Level::~Level()
{
}
