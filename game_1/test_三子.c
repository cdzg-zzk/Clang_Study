#define _CRT_SECURE_NO_WARNINGS  1
#include "game1.h"



void game()
{
	char ret;
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitialBoard(board);
	//��ӡ����
	ShowBoard(board);
	while (1)
	{
		//�������
		PlayMove(board);
		
		ret=Judgement(board);
		if (ret != 'C')
		{
			ShowBoard(board);
			CheckWin(ret);
			break;
		}
		//��������
		ComputMove(board);
		system("cls");
		ShowBoard(board);
		//�ж���Ӯ
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
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 0: break;
		case 1: game(); break;
		default: printf("�����������������\n"); break;
		}
	} while (input);
	return 0;
}