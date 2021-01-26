#define _CRT_SECURE_NO_WARNINGS  1

#include "game2.h"

void InitialBoard_1(int board[ROWS][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = 0;
		}
	}
}

void InitialBoard_2(char board[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
			board[i][j] = '*';
	}
}

void ShowBoard_1(int board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
			printf("%d ", board[i][j]);
		printf("\n");
	}
}

void ShowBoard_2(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= col; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
			printf("%c ", board[i][j]);
		printf("\n");
	}
}

void SetMine(int mine[ROWS][COLS], int row, int col,int num)
{
	int x, y;
	while (num)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == 0)
		{
			mine[x][y] = 1;
			num--;
		}
	}
}

void FindMine(int mine[ROWS][COLS], char show[ROWS][COLS], int rows, int cols)
{
	int x, y;
	while (1)
	{
		printf("请输入你要排查的位置:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 6 && y >= 1 && y <= 6)
		{
			if (show[x][y] != '*')
			{
				printf("该位置已经排查过了：请重新选择\n");
			}
			if (mine[x][y] == 1)
			{
				printf("对不起，你被炸死了，游戏结束\n");
				break;
			}
			else
			{
				int num = GetNumber(mine, ROWS, COLS, x, y);
				show[x][y] = '0' + num;
				ShowBoard_2(show, ROW, COL);
			}
			if (Judgement(show, ROW, COL))
				break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
}


int GetNumber(int mine[ROWS][COLS], int rows, int cols, int x, int y)
{
	int num = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] + mine[x][y - 1] +
		mine[x][y + 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1];
	return num;
}


int Judgement(char show[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				return 0;
		}
	}
	return 1;
}