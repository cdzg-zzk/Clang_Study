#define _CRT_SECURE_NO_WARNINGS  1
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d", c);   //-126
////a��bҪ��������00000011-a  01111111-b
////00000000000000000000000000000000011 -���ͺ�a
////00000000000000000000000000001111111 -���ͺ�b
////00000000000000000000000000010000010 -��ӽ��
////�ٷ���char�У������ضϵ�10000010 -c
////��Ҫ��ӡʱ��c->%d,c����Ҫ�������� 
////11111111111111111111111111110000010 -���ͺ�c����
////11111111111111111111111111110000001 -����
////00000000000000000000000000001111110 -ԭ�� 
////1111110  --�ضϺ� == -126
//	
//	printf("%d", a + b);  //130
//	//û�д���char�����Բ������ض�
//	return 0;
//}
//
//int main()
//{
//	int a = 13;
//	//00000000000000000000000000001101-a
//	//00000000000000000000000000000010��λ�� 
//	//Ҳ���� a | ��1<<��n-1����--Ҫ���nλ0��1
//	//00000000000000000000000000001111 -�õ��ý��
//	//
//	//�ָ�ԭ������
//	//a & (~(1<<(n-1)))\
//	//00000000000000000000000000001111
//	//11111111111111111111111111111101-ȡ�������
//	//�õ�00000000000000000000000000001101-a
//	return 0;
////}
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int x = 13;
//	int y = 7;
//	while (x > 0 || y > 0)
//	{
//		int a = x % 2;
//		int b = y % 2;
//		if (a == b)
//			count++;
//		x = x >> 1;
//		y = y >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//int calc_diff_bit(int m, int n)
//{
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp - 1);
//		count++;
//	}
//	return count;
//}


//
//int main()//��ӡ���������Ƶ�����λ��ż��λ
//{
//	int a = 10;
//	int i = 0;
//	for (i = 0; i < 32; i += 2)
//	{
//		printf("%d ", (a >> i) % 2);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2)
//	{
//		printf("%d ", (a >> i) % 2);
//	}
//	printf("\n");
//	return 0;
//}


//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}