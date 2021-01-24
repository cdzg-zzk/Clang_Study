#define _CRT_SECURE_NO_WARNINGS  1

//int my_strlen(char arr[])
//{
//	int i;
//	for (i = 0; arr[i] != '\0'; i++)
//		;
//	return i;
//}
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
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = my_strlen(arr);
//	printf("%d", sz);
//	return 0;
//}


int Fac(int n)
{
	if (n >= 1)
		return n*Fac(n - 1);
	else
		return 1;
}
//int main()
//{
//	int n=5;
//	int ret = Fac(n);
//	printf("%d", ret);
//
//	return 0;
//}
int Fib(n)
{
	return n > 2 ? Fib(n - 1) + Fib(n - 2) : 1;
}
//
//int Fib(int n)
//{
//	int a = 1; 
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{ 
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 10;
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//
//void Fun(int n)
//{
//	if (n > 9)
//		Fun(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	Fun(num);
//	return 0;
//}
//
//int Fun(int n)
//{
//	if (n > 1)
//		return n*Fun(n - 1);
//	return 1;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int ret=Fun(num);
//	printf("%d\n", ret);
//	return 0;
//}
//

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	return 0;
//}
//int main()
//{
//	char ch[] = "avcdef";
//	int ret = my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//void reverse_string(char* str)
//{
//	if (*str != '\0')
//		reverse_string(str + 1);
//	printf("%c", *str);
//}
//int main()
//{
//	char ch[] = "abcdefthf";
//	reverse_string(ch);
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//void reverse_string(char* str,int sz)
//{
//	int right = sz - 1;
//	int left = 0;
//	char tmp;
//	while (left <= right)
//	{
//		tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void reverse_string(char* str, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	char tmp;
//	tmp = *(str + left);
//	*(str + left) = *(str + right);
//	*(str + right) = tmp;
//	if ((right - left) >= 2)
//		reverse_string(str + 1, sz - 2);
//}
//int main()
//{
//	char ch[] = "abcde";
//	int sz = strlen(ch);
//	reverse_string(ch,sz);
//	printf("%s", ch);
//	return 0;
//}
//
//int Digit_sum(int n)
//{
//	if (n > 9)
//		return (n % 10) + Digit_sum(n / 10);
//	return n;
//}
//
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int ret = Digit_sum(num);
//	printf("%d\n", ret);
//	return 0;
//}
//#include <stdio.h>
//int Fun(int n, int k)
//{
//	if (k > 0)
//		return n*Fun(n,k-1);
//	return 1;
//}
//
//int main()
//{
//	int num;
//	int k;
//	scanf("%d%d", &num, &k);
//	int ret = Fun(num, k);
//
//	printf("%d\n", ret);
//
//	return 0;
//}
int Feibo(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
	
int main()
{
	int n;
	scanf("%d", &n);
	int ret = Feibo(n);
	printf("%d\n", ret);
	return 0;
}