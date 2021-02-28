#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

//
//int main()
//{
//	int date[2][3] = { 0 };
//	int(*pd)[3][4] = &date;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int(*p)(int, int) = Add;
//	int(*arr[5])(int, int) = { Add };
//	int(*(*parr)[5])(int, int);
//	return 0;
//}
//
//void _swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//int cmp(const void*e1, const void*e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void bubble_sort(void* base, size_t num, size_t width, int(*p)(const void*, const void*))
//{
//	for (size_t i = 0; i < num - 1; i++)
//	{
//		size_t j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (p((char*)base + j*width, (char*)base + (j + 1)*width)>0)
//			{
//				_swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}
//
//void*++ print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	int arr[5] = { 2, 1, 5, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp);
//	print(arr, sz);
//	return 0;
//}
/*

void print(int* p)  //p-也是数组
{
	printf("%d ", p[2]);
}

#include <stdio.h>
int main()
{
	int arr[] = { 1, 3, 5, 7, 9, 11 };
	int* p = arr;
	print(arr);
	//printf("%d\n", *++p);
	//printf("%d\n", ++*p);
	return 0;
}
*/

//int main()
//{
//	int arr[2][3] = { 0 };
//	int* p = arr[1];
//	int* b = arr[1];
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		*p++ = i + 1;
//	}
//	printf("%d\n", arr[1][2]);
//	printf("%d\n", b[2]);
//	return 0;
//}
//
//int Find_largest(int(*p)[2])
//{
//	int max = (*p)[0];
//	int i = 0;
//	for (i; i < 4; i++)
//	{
//		if (max < p[0][i])
//			max = p[0][i];
//	}
//	return max;
//}
//
//
//int main()
//{
//	int arr[2][2] = { 1, 2, 3, 4 };
//	int max=Find_largest(arr);
//	printf("%d\n", max);
//	return 0;
//}
//#include <string.h>
//int main()
//{
//	char arr[50] = "0";
//	int ch = 0;
//	int i = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		arr[i] = ch;
//		i++;
//	}
//	while (i)
//	{
//		printf("%c", arr[i - 1]);
//		i--;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	short arr[3] = { 1, 2 };
//	//printf("%d\n", sizeof(arr[0]+1));
//	int* p = (int*)arr;
//	printf("%d\n", *p);
//	return 0;
//}
//
//int main()
//{
//	int(*(*p)[10])()
//	return 0;
//}
//int judge(char* str1, char* str2, int sz)
//{
//	//找到起始位置
//	int i = 0;
//	for (i = 0; i < sz;i++,str2++)
//	{
//		if (*str1 == *str2)
//			break;
//	}
//	if (i == sz)
//		return 0;  //==sz后，说明一直没有相同元素，就是没有
//	//逐个判等
//	for (i = 0; i < sz; i++)
//	{
//		if (*str1 != *str2)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	char ch1[20];
//	gets(ch1);
//	char ch2[20];
//	gets(ch2);
//	int sz = strlen(ch1);
//	int flag=judge(ch1, ch2, sz);
//	if (flag == 1)
//		printf("yes!\n");
//	else
//		printf("no!\n");
//	return 0;
//}
/*
#include <string.h>
int judge(char* str1, char* str2, int sz)
{
	//找到起始位置
	int i = 0;
	for (i = 0; i < sz;i++,str2++)
	{
		if (*str1 == *str2)
			break;
	}
	if (i == sz)
		return 0;  //==sz后，说明一直没有相同元素，就是没有
	//逐个判等
	for (i = 0; i < sz; i++)
	{
		if (*str1 != *str2)
			return 0;
	}
	return 1;
}
int main()
{
	char ch1[20];
	gets(ch1);
	char ch2[20];
	gets(ch2);
	int sz = strlen(ch1);
	int flag=judge(ch1, ch2, sz);
	if (flag == 1)
		printf("yes!\n");
	else
		printf("no!\n");
	return 0;
}
*/
/*
void leftRound(char * src, int time)
{
	int len = strlen(src);
	int pos = time % len; //断开位置的下标
	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp

	strcpy(tmp, src + pos); //先将后面的全部拷过来
	strncat(tmp, src, pos); //然后将前面几个接上
	strcpy(src, tmp); //最后拷回去
}
*/
//void Turn_left(char* str, int k)
//{
//	
//	int sz = strlen(str);
//	int time = k%sz;
//	char tmp[50] = { 0 };
//	strcpy(tmp, str+time);
//	strncat(tmp, str, time);
//	strcpy(str, tmp);
//}
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	char ch[20];
//	scanf("%s", ch);
//	Turn_left(ch, k);
//	printf("%s",ch);
//	return 0;
//}


////杨氏矩阵--查找最值
//
//int find(int arr[3][4], int row, int col,int k)
//{
//	int i = row - 1;
//	int j = 0;
//	while (i >= 0 && j <= col)
//	{
//		if (arr[i][j] > k)
//		{
//			i--;
//		}
//		else if (arr[i][j] < k)
//		{
//			j++;
//		}
//		else
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][4] = { 1, 2, 3, 4, 5, 7, 8, 9, 10, 11, 12 };
//	int k = 0;
//	scanf("%d", &k);
//	if (find(arr, 3, 4, k))
//		printf("找到了\n");
//	else
//		printf("找不到\n");
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char arr[] = "\xab";
//	printf("%d\n", strlen(arr));
//	printf("%d", 071);
//	return 0;
//}








//
//
//int Find_num(int arr[], int n, int k)
//{
//	int left = 0;
//	int right = n - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid]<k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = Find_num(arr, sz, k);
//	if (num >= 0)
//		printf("下标是%d\n", num);
//	else
//		printf("对不起，找不到\n");
//	return 0;
//}
//
//void swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		while ((arr[left] % 2 != 0) && (left<=right))        //避免全是奇数
//			left++;
//		while ((arr[right] % 2 == 0) && (left <= right))     //避免全是偶数
//			right--;
//		if (left<=right)
//			swap(&arr[left], &arr[right]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,5,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int(*(*p)[10])(int*)
#include <stdlib.h>

//int cmp_int(const void*e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1, 5, 8, 9, 6, 3, 4, 7, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
//
//
//


struct Stu
{
	char name[20];
	int age;
};

int cmp_by_name(const void*e1, const void*e2)
{
	return strcmp((char*)e1, (char*)e2);
}


int main()
{
	struct Stu arr[] = { { "abcd", 180 }, { "abc", 25 } };

	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), cmp_by_name);
	return 0;
}
















