#define _CRT_SECURE_NO_WARNINGS  1
//
//#include <stdio.h>
//int* Sort(int* arr,int sz)
//{
//	int arrey[50] = { 0 };
//	int i=0;
//	int j = sz - 1;
//	int k;
//	for (k = 0; k < sz; k++)
//	{
//		if (arr[k] % 2 == 1)
//		{
//			arrey[i] = arr[k];
//			i++;
//		}
//		else
//		{
//			arrey[j] = arr[k];
//			j--;
//		}
//	}
//	return arrey;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pa=Sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}






//int*  Fun(int arr[])
//{
//	int arrey[3];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//		arrey[i] = arr[i];
//	return arrey;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3 };
//	int* pa = Fun(arr);
//	for (int i = 0; i < 3; i++)
//		printf("%d ", *(pa + i));
//	return 0;
//
//}

int* Fun(int*arr)
{
	return arr;
}
int main()
{
	int arr[3] = { 1, 2, 3 };
	int* pa = Fun(arr);
	int i = 0;
	for (i = 0; i < 3; i++)
		printf("%d ", *(pa + i));
	return 0;
}