#define _CRT_SECURE_NO_WARNINGS  1
#include "game2.h"


void menu()
{
	printf("\n\n\n");
	printf("***********************\n");
	printf("*****  1.  play   *****\n");
	printf("*****  0.  exit   *****\n");
	printf("***********************\n");
}

void game()
{
	//创建两个棋盘
	int mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化两个棋盘
	InitialBoard_1(mine, ROWS, COLS);
	InitialBoard_2(show, ROWS, COLS);
	//ShowBoard_1(mine, ROW, COL);
	printf("\n\n");
	ShowBoard_2(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL, NUM_MINE);
	//ShowBoard_1(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROWS, COLS);
}



int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game(); break;
		case 0: printf("退出游戏\n"); break;
		default: printf("输入错误，请重新选择\n"); break;
		}
	} while (input);
	return 0;
}