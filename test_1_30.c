#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//void reverse(char* str)
//{
//	char* left = str;
//	int sz = my_strlen(str);
//	char* right = str + sz - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//
//void reverse(char* str)
//{
//	int sz = strlen(str);
//	char tmp = *str;
//	*str = *(str + sz - 1);
//	*(str + sz - 1) = '\0';
//	if (strlen(str+1)>=2)
//		reverse(str + 1);
//	*(str + sz - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//统计二进制中1的个数
//int count_one(int num)//用于
//{
//	int count = 0;
//	int i;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	return count;
//}
//
//int count_one(size_t num)//用于
//{
//	int count = 0;
//	int i;
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num /= 2;
//	}
//	return count;
//}
//
//int count_one(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//			count++;
//	}
//	return count;
//}
//int count_one(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = (num - 1)&num;//使最右边的1消失
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int n = 3;
//	int count = 0;
//	count = count_one(n);
//	printf("%d\n", count);
//	return 0;
//}


int main()
{
	int n = 10000;
	char* p = &n;
	*p = 0;
	printf("%d", n);
	return 0;
}