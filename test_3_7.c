#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

//typedef struct Book
//{
//	short price;
//	char name[20];
//}Book;
//
//
//struct
//{
//	char name[20];
//	int age;
//}a;
//struct
//{
//	char name[20];
//	int age;
//}* pa;
//
//struct Node
//{
//	int data; //数据域
//	struct Node* next;//指针域
//};
//
//
//
//int main()
//{
//	pa = &a;
//	return 0;
//}
//#include <stdlib.h>
//#include <stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//int main()
//{
//	struct S a;
//	printf("%d\n",offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}
//

//struct S1
//{
//	double d;
//	char c;
//	int i;
//};
//#pragma pack(1)   //将默认对齐数改为1
//struct S2
//{
//	char c1;
//	struct S1 s;
//	double d;
//};
//#pragma pack()   //将默认对齐数改回8
//
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//
//
//enum Sex
//{
//	MALE=3,
//	FEMALE=5
//};
/*
int main()
{
	enum Sex s = FEMALE;
	//默认值
	printf("%d\n", MALE);  //0
	printf("%d\n", FEMALE);//1
	//修改值
	printf("%d\n", MALE);  //
	printf("%d\n", FEMALE);//1
	



	//printf("sizeof(struct A)=%d\n", sizeof(struct A));
	//printf("%d\n", sizeof(struct S2));
	
	struct A a = { 0 };
	a._a = 10;
	a._b = 12;
	a._c = 3;
	a._d = 4;
	
	
	return 0;
}
*/
/*
union Un
{
	int i;
	char ch;
};
int main()
{
	union Un u;
	printf("%p\n", &u);
	printf("%p\n", &(u.i));
	printf("%p\n", &(u.ch));
	return 0;
*/

//#include <stddef.h>
//union Un
//{
//	char ch;
//	int i;
//	short b;
//};
//
//int main()
//{
//	struct S1 s;
//	union Un u;
//	//printf("%d\n", sizeof(u));
//	printf("%d\n", offsetof(struct S1, d));
//	return  0;
//}

typedef struct
{
	char ch;
}S;
int main()
{
	S s = { 'a' };
	return 0;
}
















