#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

//int main()
//{
//	char ch[] = "##############";
//	char ar[] = "hello my dear!";
//	int left = 0;
//	int right = sizeof(ch) / sizeof(ch[0])-2;  //-2
//	          //strlen(ch)-1
//	while (left <= right)
//	{
//		
//		ch[left] = ar[left];
//		ch[right] = ar[right];
//		left++;
//		right--;
//		printf("%s\n", ch);
//		Sleep(500);
//		system("cls");    //�����Ļ
//	}
//	return 0;
//}
//int main()
//{
//	char password[20] = { 0 };
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ,��½�ɹ�\n");
//			break;
//		}
//		else
//			printf("���������������\n");
//	}
//	if (i == 3)
//	{
//		printf("�˺Ŷ���!\n");
//	}
//	return 0;
//}
//#include <time.h>
//void menu()
//{
//	printf("**************\n");
//	printf("*****1.play***\n");
//	printf("*****2.exit***\n");
//	printf("**************\n");
//}
//
//void Game()
//{
//	int level;
//	printf("��������Ϸ�У������ֵķ�Χ��1��?��\n");
//	scanf("%d", &level);
//	int answer = (rand() % level) + 1;
//	int guess;
//	while (1)
//	{
//		printf("��������µ�����\n");
//		scanf("%d", &guess);
//		if (guess > answer)
//			printf("�´���\n");
//		else if (guess < answer)
//			printf("��С��\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��1/0��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: Game(); break;
//		case 0: printf("�˳���Ϸ"); break;
//		default: printf("�������"); break;
//		}
//
//	} while (input);
//	return 0;
//}
#include <stdio.h>
#include <time.h>
void menu()
{
	printf("***************\n");
	printf("******1.play***\n");
	printf("******0.exit***\n");
	printf("***************\n");
}

void Game()
{
	int level;
	printf("��������Ϸ���ַ�Χ1-?\n");
	scanf("%d", &level);   //����ѡ����Ϸ�Ѷ�
	int answer = (rand() % level) + 1;
	int guess;
	while (1)
	{
		printf("�������������>\n");
		scanf("%d", &guess);
		if (guess > answer)
			printf("�´���\n");
		else if (guess < answer)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;                //�¶��ˣ�������������
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int input;
	do{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: Game(); break;
		case 0: printf("�Ƴ���Ϸ\n"); break;
		default: printf("�����������������\n"); break;
		}
	} while (input);  //0��ֱ���˳����򣬷��������do whileѭ��
	return 0;
}