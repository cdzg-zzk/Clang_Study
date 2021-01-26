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
	//������������
	int mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ����������
	InitialBoard_1(mine, ROWS, COLS);
	InitialBoard_2(show, ROWS, COLS);
	//ShowBoard_1(mine, ROW, COL);
	printf("\n\n");
	ShowBoard_2(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL, NUM_MINE);
	//ShowBoard_1(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROWS, COLS);
}



int main()
{
	int input;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: game(); break;
		case 0: printf("�˳���Ϸ\n"); break;
		default: printf("�������������ѡ��\n"); break;
		}
	} while (input);
	return 0;
}