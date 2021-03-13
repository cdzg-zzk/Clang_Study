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
	char classname[10];  //在Class中使用了Stu
};
int main()
{
	struct Stu s = { "小明",20 };
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
	int* p = (int*)malloc(40);       //malloc( size_buffer )  返回一个void* 类型指针
	                                 //根据开辟空间用途，自己决定void* 转换成的指针类型
	if (p == NULL)
		printf("内存开辟失败\n");     //内存开辟失败返回NULL
	else
	{
		for (int i = 0; i < 10; i++)
		{
			p[i] = i;
		}
	}
	free(p); //把p所指向的开辟内存空间释放（所以p不能++/--改变）
	p = NULL;//p赋值成NULL避免指向位置空间
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
	int* p = (int*)calloc(10,sizeof(int));   //calloc(个数，每个的大小-字节)
	if (p == NULL)                           //内存开辟失败返回空指针
	{
		printf("%s\n", strerror(errno));     //打印错误码
	}
	else
	{
		for (int i = 0; i < 10;i++)
			printf("%d ", *(p + i));         //calloc会在开辟内存的时候把其都初始化为0
		free(p);                             //使用完后释放
		p = NULL;                            //释放后立马置成空指针
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
//		printf("内存开辟失败\n");
//	else
//	{
//		for (i = 0; i < 10; i++)
//			printf("%d ", *(p + i));
//		printf("\n");
//		int* ptr = (int*)realloc(p, 80);  //拿新指针接受，因为开辟失败会返回空指针
//		if (ptr != NULL)
//		{ 
//			p = ptr;                      //开辟成功再把内存起始位置给原来指针
//		}
//		else
//			printf("内存开辟失败\n");
//		for (i = 0; i < 20; i++)
//			printf("%d ", *(p + i));
//		free(p);                          //及时释放
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
	strcpy(class.arr[1].name, "智障凯");
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
	int arr[];   //柔性数组必须是结构体中最后一个成员变量
};

int main()
{
//	struct S s;  //不是这样创建结构体变量的
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
	FILE* pf=fopen("./Debug/zzk.txt", "r");  //fopen(文件名，操作方式)
	                                  //成功返回文件信息区的地址，失败返回NULL
	if(pf == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("文件打开成功\n");
	//使用完毕后即使关闭文件
	fclose(pf);      //fclose(文件信息区地址)
	pf = NULL;       //pf置为空
	return 0;
}
//相对路径
//fopen("data.txt","r");
//fopen(../data.txt,"r");  //上级目录的文件
//上一级：  ../../
//下一级：  ./hehe/test.txt


//绝对路径--注意\形成转移字符
//fopen("D:\\2021_code\\winterclass\\test_3_12\\data.txt","r");








