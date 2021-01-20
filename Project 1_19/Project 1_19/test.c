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
//		system("cls");    //清空屏幕
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
//			printf("输入正确,登陆成功\n");
//			break;
//		}
//		else
//			printf("输入错误，重新输入\n");
//	}
//	if (i == 3)
//	{
//		printf("账号冻结!\n");
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
//	printf("请输入游戏中，猜数字的范围（1·?）\n");
//	scanf("%d", &level);
//	int answer = (rand() % level) + 1;
//	int guess;
//	while (1)
//	{
//		printf("请输入你猜的数字\n");
//		scanf("%d", &guess);
//		if (guess > answer)
//			printf("猜大了\n");
//		else if (guess < answer)
//			printf("猜小了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
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
//		printf("请选择（1/0）>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1: Game(); break;
//		case 0: printf("退出游戏"); break;
//		default: printf("输入错误"); break;
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
	printf("请输入游戏数字范围1-?\n");
	scanf("%d", &level);   //自行选择游戏难度
	int answer = (rand() % level) + 1;
	int guess;
	while (1)
	{
		printf("请输入你的数字>\n");
		scanf("%d", &guess);
		if (guess > answer)
			printf("猜大了\n");
		else if (guess < answer)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了！\n");
			break;                //猜对了，可以跳出来了
		}
	}
}

int main()
{
	srand((unsigned)time(NULL));
	int input;
	do{
		menu();
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1: Game(); break;
		case 0: printf("推出游戏\n"); break;
		default: printf("输入错误，请重新输入\n"); break;
		}
	} while (input);  //0就直接退出程序，非零则继续do while循环
	return 0;
}