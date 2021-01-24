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
	printf("����������:>");
	scanf("%d%d", &x, &y);
	if (x<0 || x>ROW || y<0 || y>COL)
	{
		printf("������������������������룺\n");
		goto again;
	}
	else if (board[x - 1][y - 1] != ' ')
	{
		printf("�������ѱ�ռ�ã����������룺\n");
		goto again;
	}
	else
		board[x - 1][y - 1] = PLAY;
}

void ComputMove(char board[ROW][COL])
{
	printf("�ȴ���������....\n");
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
		//�ж�����
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < ROW; i++)
	{
		//�ж�����
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//�ж����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	//�жϴζԽ���
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
	case '#': printf("��ϲ�㣬��Ӯ��\n"); break;
	case '*':  printf("ɵ�ӣ����Զ�����\n"); break;
	case 'E': printf("250�ɣ����ܸ����Դ�ƽ\n"); break;
	}
}










