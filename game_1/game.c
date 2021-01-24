#define _CRT_SECURE_NO_WARNINGS  1

#include "game1.h"

void menu()
{
	printf("************************\n");
	printf("*****    1.play     ****\n");
	printf("*****    0.exit     ****\n");
	printf("************************\n");
}

void InitialBoard(char board[ROW][COL])
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			board[i][j] = ' ';
	}
}

void ShowBoard(char board[ROW][COL])
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c |",board[i][j]);
		}
		printf("\n");
		for (j = 0; j < COL; j++)
		{
			printf("---|");
		}
		printf("\n");
	}
}


void PlayMove(char board[ROW][COL])
{
	int x, y;
again:
	printf("请输入坐标:>");
	scanf("%d%d", &x, &y);
	if (x<0 || x>ROW || y<0 || y>COL)
	{
		printf("你输入的坐标有误，请重新输入：\n");
		goto again;
	}
	else if (board[x - 1][y - 1] != ' ')
	{
		printf("该坐标已被占用，请重新输入：\n");
		goto again;
	}
	else
		board[x - 1][y - 1] = PLAY;
}

void ComputMove(char board[ROW][COL])
{
	printf("等待电脑下棋....\n");
	Sleep(800);
	int x, y;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = COM;
			break;
		}
	}
}

char Judgement(char board[ROW][COL])
{
	int i;
	for (i = 0; i < ROW; i++)
	{
		//判断三行
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < ROW; i++)
	{
		//判断三列
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//判断主对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	//判断次对角线
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1]!=' ')
		return board[1][1];
	for (i = 0; i < ROW; i++)
	{
		int j;
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 'C';
			}
		}
	}
	return 'E';
}

void CheckWin(char ret)
{
	switch (ret)
	{
	case '#': printf("恭喜你，你赢了\n"); break;
	case '*':  printf("傻子，电脑都能输\n"); break;
	case 'E': printf("250吧，还能跟电脑打平\n"); break;
	}
}










