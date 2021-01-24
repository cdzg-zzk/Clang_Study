#define _CRT_SECURE_NO_WARNINGS  1
#include "game1.h"



void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitialBoard(board);
	//打印棋盘
	ShowBoard(board);
	while (1)
	{
		//玩家下棋
		PlayMove(board);
		
		ret=Judgement(board);
		if (ret != 'C')
		{
			ShowBoard(board);
			CheckWin(ret);
			break;
		}
		//电脑下棋
		ComputMove(board);
		system("cls");
		ShowBoard(board);
		//判断输赢
		ret=Judgement(board);
		if (ret != 'C')
		{
			ShowBoard(board);
			CheckWin(ret);
			break;
		}
		
	}
}

int main()
{
	srand((unsigned) time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0: break;
		case 1: game(); break;
		default: printf("输入错误，请重新输入\n"); break;
		}
	} while (input);
	return 0;
}