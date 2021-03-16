#define _CRT_SECURE_NO_WARNINGS  1

#define _CRT_SECURE_NO_WARNINGS  1

//姓名
//性别
//年龄
//电话
//地址


//增加-1
//删除-2
//修改-3
//查找-4
//排序-5
//退出-0
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
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD: AddContact(&con); break;
		case DEL: DelContact(&con); break;
		case MODIFY: ModifyContact(&con); break;
		case SEARCH: FindContact(&con); break;
		case SORT: SortContact(&con); break;
		case SHOW: ShowContact(&con); break;
		case EXIT: DestroyContact(&con); printf("退出程序\n"); break;
		case SAVE: SaveContact(&con); break;
		default: printf("输入错误，请重新输入\n");
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}