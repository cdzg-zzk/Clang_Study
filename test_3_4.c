#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>
//
//int judge_cp()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	if (judge_cp())
//		printf("–°∂À\n");
//	else
//		printf("¥Û∂À\n");
//	return 0;
//}
char* my_strcat(char* dest, char* src)
{
	char* ret = dest;
	while (*++dest)//dest’“µΩ'\0'
	{
		;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}
int main()
{
	char ch1[20] = "hello ";
	char ch2[] = "world";
	
	printf("%s", my_strcat(ch1, ch2));
	return 0;
}