#define _CRT_SECURE_NO_WARNINGS  1
#define white  '*'
#include <stdio.h>
//int main()
//{
//	int flag = 0;
//	int arr[5] = { 0 };
//	printf("输入：");
//	int i = 0;
//	for (i = 0; i < 5; i++)
//		scanf("%d", &arr[i]);
//	int min = arr[0];
//	for (i = 0; i < 5; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			flag = i;
//		}
//	}
//	printf("%d", flag + 1);
//	return 0;
//}

//
//int main()
//{
//	double a = 3.145f;
//	printf("%e", a);
//	return 0;
//}
//int main()
//{
//	int  arr[3][4];
//	int sz = sizeof(arr[1]) / sizeof(arr[0][0]);    //求列数
//	int szz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", szz);
//	return 0;
//}

//int main()
//{
//	printf("%c", 0);
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i, j;
//	int flag = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag)
//			break;
//	}
//	for (i = 0; i < sz - 1; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//
//void Initial(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//		arr[i] = i;
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d", arr[i]);
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Initial(arr,sz);
//	
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5 };
	int arr2[5] = { 6, 7, 8, 9, 0 };
	int i;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sz; i++)
		printf("%d %d\n", arr1[i], arr2[i]);
	return 0;
}