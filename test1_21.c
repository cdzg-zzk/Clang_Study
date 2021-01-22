#define _CRT_SECURE_NO_WARNINGS  1
#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		int ret;
		srand(rand());
		ret = rand();
		printf("%d\n", ret);

	}
	return 0;
}*/

//int main()
//{
//	int i = 1;
//	for (int i = 0; i < 2; i++)
//	{
//		;
//	}
//	printf("%d", i);
//	return 0;
//}

//int main()
//{
//	int i, odd;
//	i = 1;
//	odd = 3;
//	for (int square = 1; i <= 16; odd += 2)
//	{
//		printf("%10d%10d", i, square);
//		++i;
//		square += 2;
//	}
//	return 0;
//}

//#include <math.h>
//int is_prime(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int i = 7;
//	for (i = 100; i <= 200;i++)
//		if (is_prime(i))
//			printf("%d ",i);
//	return 0;
//}
////int binary_search(int arr[], int k, int n)
////{
////	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//
//
//
//int main()
//{
//	//有序的
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	//二分查找的
//	//找到了，返回下标
//	//找不到，返回 -1
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz );
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//
//	return 0;
//}
//int judge_year(int i)
//{
//	if ((i % 100 != 0 && i % 4 == 0) || (i % 400 == 0))
//		return 1;
//	return 0;
//}
//
//
//int main()
//{
//	int year;
//	while (~scanf("%d", &year))
//	{
//		if (judge_year(year))
//			printf("%d是闰年\n", year);
//		else
//			printf("%d不是闰年\n", year);
//	}
//	return 0;
//}


//void Swap(int* a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	Swap(&a, &b);
//	printf("交换后内容是%d %d", a, b);
//	return 0;
//}

void print(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d×%2d=%-4d", i, j, i*j);
		}
		printf("\n");
	}
}
int main()
{
	int num;
	scanf("%d", &num);
	print(num);
	return 0;
}