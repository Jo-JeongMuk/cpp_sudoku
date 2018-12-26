#pragma once

#include <cstdlib>
#include "Question.h"

class Board : public Question
{
protected:
	char **colorset;
	char *question;
	char *userdata;
	char board[BOARD_COLUME][BOARD_ROW] =
	{ "                                           ",
	  " ++=++===========+===========+===========++",
	  " || || 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 ||",
	  " ++=++===========+===========+===========++",
	  " ||1||   |   |   |   |   |   |   |   |   ||                       _         _ ",
	  " ++-++-----------+-----------+-----------++                      | |       | |",
	  " ||2||   |   |   |   |   |   |   |   |   ||       ____ _    _   _| | ____  | | ___  _   _",
	  " ++-++-----------+-----------+-----------++      / ___| |  | |/ _  |/ __ ＼| |/  / | | | |",
	  " ||3||   |   |   |   |   |   |   |   |   ||      ＼__ ＼|__| | (_| || (_) ||   <   | |_| |",
	  " ++=++===========+===========+===========++      |____/＼____/＼___|＼____/|_|＼_＼＼____/",
	  " ||4||   |   |   |   |   |   |   |   |   ||              Designed by 'Team Bed Smell'",
	  " ++-++-----------+-----------+-----------++",
	  " ||5||   |   |   |   |   |   |   |   |   ||    ++========================================++",
	  " ++-++-----------+-----------+-----------++    ||                                        ||",
	  " ||6||   |   |   |   |   |   |   |   |   ||    ||             % 추 가 기 능 %            ||",
	  " ++=++===========+===========+===========++    ||                                        ||",
	  " ||7||   |   |   |   |   |   |   |   |   ||    ||  1. 입력값 삭제 : 삭제하려는 행/열/0   ||",
	  " ++-++-----------+-----------+-----------++    ||  2. 레벨 재선택 : q/Q                  ||",
	  " ||8||   |   |   |   |   |   |   |   |   ||    ||  3. 리       셋 : w/W                  ||",
	  " ++-++-----------+-----------+-----------++    ||  4. 강제   종료 : e/E                  ||",
	  " ||9||   |   |   |   |   |   |   |   |   ||    ||                                        ||",
	  " ++=++===========+===========+===========++    ++========================================++"
	};
public:
	Board();
	void init(char* array, char**data);
	void input();
	void printboard();
	~Board();
};