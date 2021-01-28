#define _CRT_SECURE_NO_WARNINGS  1

//
//struct Point
//{
//	int x;
//};
//struct S
//{
//	char arr[10];
//	struct Point p;    //结构体的嵌套
//	double d;
//};
//
//
//int main()
//{
//	struct S s = { "abc", { 2 }, 3.14 };
//	printf("%s %d %lf", s.arr, s.p.x, s.d);
//	return 0;
//}
//
#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ", *(arr + i));
//	return 0;
//}



#include <string.h>
#include <stdio.h>


void reverse(char* str, int sz)
{
	char* end = str + sz - 1;
	while (end >= str)
	{
		char ch = *str;
		*str = *end;
		*end = ch;
		end--;
		str++;
	}
}
int main()
{
	char str[100] = { 0 };
	char* ch = str;
	gets(str);
	int sz = strlen(str);
	reverse(str, sz);
	printf("%s", str);
	return 0;
}
/*
#include <stdio.h>
#include <math.h>


int main()
{
	int a = 2;
	int i = 5;
	double sum = 0;
	while (i >= 1)
	{
		sum += a*pow(10, 5 - i)*i;
		i--;
	}
	printf("%d\n", (int)sum);
	return 0;
}*/
//long Get_Num(long i)
//{
//	int sum = 0;
//	int a = i;
//	int count = 0;
//	while (i)
//	{
//		i /= 10;
//		count++;
//	}
//	for (int j = 0; j < count; j++)
//	{
//		sum += pow(a % 10, count);
//		a /= 10;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	long i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		long ret = Get_Num(i);
//		if (ret == i)
//			printf("%ld ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 6; i++)
//	{
//		int j;
//		for (j = 0; j<=6-i; j++)
//			printf(" ");
//		for (j = 0; j < 2 * i - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	printf("*************\n");
//	for (i = 0; i <= 6; i++)
//	{
//		int j;
//		for (j = 1; j <= i; j++)
//			printf(" ");
//		for (j = 0; j <= 13 - 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int money = 20;
//	int sum = money/1;
//	int num = sum;
//	while (num>=2)
//	{
//		int tmp = num / 2;
//		sum += tmp;
//		num = num % 2 + tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}















