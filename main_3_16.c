#define _CRT_SECURE_NO_WARNINGS  1

#define _CRT_SECURE_NO_WARNINGS  1

//����
//�Ա�
//����
//�绰
//��ַ


//����-1
//ɾ��-2
//�޸�-3
//����-4
//����-5
//�˳�-0
#include "3_16.h"





void menu()
{
	printf("*************************\n");
	printf("***  1.ADD    2.DEL   ***\n");
	printf("***  3.MODIFY 4.SEARCH***\n");
	printf("***  5.SORT   6.SHOW  ***\n");
	printf("***  0.EXIT   7.SAVE  ***\n");
	printf("*************************\n");
}
void test()
{
	struct Contact con;
	InitCon(&con);
	int input = 0;
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD: AddContact(&con); break;
		case DEL: DelContact(&con); break;
		case MODIFY: ModifyContact(&con); break;
		case SEARCH: FindContact(&con); break;
		case SORT: SortContact(&con); break;
		case SHOW: ShowContact(&con); break;
		case EXIT: DestroyContact(&con); printf("�˳�����\n"); break;
		case SAVE: SaveContact(&con); break;
		default: printf("�����������������\n");
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}