#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>



////��ʹ����ʱ����������������   
//int main()
//{
//	//���ƣ��ᷢ���������
//	int a = 10;
//	int b = 2;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 10;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d", a, b);
//}



int main()
{
	short s = 3;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));
	printf("%d\n", s);
	return 0;
}