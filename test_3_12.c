#define _CRT_SECURE_NO_WARNINGS  1

/*
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int res[5] = { 0 };
	int all = 1;
	for (int i = 0; i < 5; i++)
	{
		all *= arr[i];
	}
	for (int i = 0; i < 5; i++)
	{
		res[i] = all / arr[i];
	}
	for (int i = 0; i < 5; i++)
		printf("%d ", res[i]);
	return 0;
}*/





/*
struct Stu
{
	char name[20];
	int age;
};
struct Class
{
	struct Stu s1;
	char classname[10];  //��Class��ʹ����Stu
};
int main()
{
	struct Stu s = { "С��",20 };
	struct Stu* ps = &s;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	return 0;
}*/
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int* p = (int*)malloc(40);       //malloc( size_buffer )  ����һ��void* ����ָ��
	                                 //���ݿ��ٿռ���;���Լ�����void* ת���ɵ�ָ������
	if (p == NULL)
		printf("�ڴ濪��ʧ��\n");     //�ڴ濪��ʧ�ܷ���NULL
	else
	{
		for (int i = 0; i < 10; i++)
		{
			p[i] = i;
		}
	}
	free(p); //��p��ָ��Ŀ����ڴ�ռ��ͷţ�����p����++/--�ı䣩
	p = NULL;//p��ֵ��NULL����ָ��λ�ÿռ�
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
int main()
{
	int* p = (int*)calloc(10,sizeof(int));   //calloc(������ÿ���Ĵ�С-�ֽ�)
	if (p == NULL)                           //�ڴ濪��ʧ�ܷ��ؿ�ָ��
	{
		printf("%s\n", strerror(errno));     //��ӡ������
	}
	else
	{
		for (int i = 0; i < 10;i++)
			printf("%d ", *(p + i));         //calloc���ڿ����ڴ��ʱ����䶼��ʼ��Ϊ0
		free(p);                             //ʹ������ͷ�
		p = NULL;                            //�ͷź������óɿ�ָ��
	}
	return 0;
}

*/
//#include <stdio.h>
//int* test()
//{
//	//int a = 0;
//	int* ptr;
//	*ptr = 20;
//	return ptr;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int i = 0;
//	int* p = (int*)calloc(40,sizeof(char));
//	if (p == NULL)
//		printf("�ڴ濪��ʧ��\n");
//	else
//	{
//		for (i = 0; i < 10; i++)
//			printf("%d ", *(p + i));
//		printf("\n");
//		int* ptr = (int*)realloc(p, 80);  //����ָ����ܣ���Ϊ����ʧ�ܻ᷵�ؿ�ָ��
//		if (ptr != NULL)
//		{ 
//			p = ptr;                      //���ٳɹ��ٰ��ڴ���ʼλ�ø�ԭ��ָ��
//		}
//		else
//			printf("�ڴ濪��ʧ��\n");
//		for (i = 0; i < 20; i++)
//			printf("%d ", *(p + i));
//		free(p);                          //��ʱ�ͷ�
//		p = NULL;
//	}
//	return 0;
//}
//
/*
struct S
{
	char name[20];
	int age;
};
struct C
{
	struct S arr[10];
	int sz;
};


int main()
{
	struct C class = { { { "abc", 12 }, { "cbd", 20 } }, 0};
	strcpy(class.arr[1].name, "���Ͽ�");
	printf("%s\n", class.arr[1].name);
	printf("%d", sizeof(class.arr[1].name));
	return 0;
}
*/
/*
int main()
{
	printf("%d\n", sizeof(long));
	return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
/*
struct S
{
	int n;
	char ch;
	int arr[];   //������������ǽṹ�������һ����Ա����
};

int main()
{
//	struct S s;  //�������������ṹ�������
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
	ps->n = 100;
	printf("%d\n", ps->n);
	free(ps);
	ps = NULL;
	return 0;
}
*/

int main()
{
	FILE* pf=fopen("./Debug/zzk.txt", "r");  //fopen(�ļ�����������ʽ)
	                                  //�ɹ������ļ���Ϣ���ĵ�ַ��ʧ�ܷ���NULL
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("�ļ��򿪳ɹ�\n");
	//ʹ����Ϻ�ʹ�ر��ļ�
	fclose(pf);      //fclose(�ļ���Ϣ����ַ)
	pf = NULL;       //pf��Ϊ��
	return 0;
}
//���·��
//fopen("data.txt","r");
//fopen(../data.txt,"r");  //�ϼ�Ŀ¼���ļ�
//��һ����  ../../
//��һ����  ./hehe/test.txt


//����·��--ע��\�γ�ת���ַ�
//fopen("D:\\2021_code\\winterclass\\test_3_12\\data.txt","r");








