#define _CRT_SECURE_NO_WARNINGS  1


#/*include <stdio.h>

int main()
{
	int a = 0x11223344;
	return 0;
}*/

//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器是啥样的
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	char* p = &a;
//	if ((*p) == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int main()
//{
//	unsigned char a = -1;
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	int n = 9;
//	float* f = &n;
//	*f = 9.0;
//	printf("%d", n);
//	printf("%f", *f);
//	return 0;
//}

//
//int main()
//{
//	int arr[30][30] = { 0 };
//	int n = 0;
//	int i,j;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//	return 0;
//}
//



//int main()
//{
//	int killer = 'a';
//	for (killer; killer <= 'd'; killer++)
//	{
//		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}

int main()
{
	int a, b, c, d, e;
	for (a = 1; a <= 5;a++)
	for (b = 1; b <= 5;b++)
	for (c = 1; c <= 5;c++)
	for (d = 1; d <= 5;d++)
	for (e = 1; e <= 5; e++)
	{
		if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1)
			&& ((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1)
			&& ((e == 4) + (a == 1) == 1))
		{
			if (a*b*c*d*e == 120)
				printf("%d %d %d %d %d\n", a, b, c, d, e);
		}
			
	}
	return 0;
}