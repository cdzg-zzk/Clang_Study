#define _CRT_SECURE_NO_WARNINGS  1
#include <string.h>
#include <errno.h>
#include <stdio.h>
/*
int main()
{
	FILE* pf = fopen("data.txt", "w");
	char arr[20] = { 0 };
	fgets(arr, "10", stdin);
	printf("%s", arr);


	
	int ch = fgetc(pf);
	if (ch == EOF)
		printf("%s\n",strerror(errno));
	else
		printf("%c\n", ch);

	fgetc(pf);


	return 0;
}*/


//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//写内容
//	fputc('a', pf);
//
//	//关闭文件
//	fclose(pf);
//	//由于fputc适用于所有流，所以也可以输出在stdout(标准输出流)
//	fputc('a', stdout);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//从文件中读取字符
//	int ch;
//	while ((ch = fgetc(pf)) != EOF)  // fgetc读取失败后返回EOF
//	{
//		printf("%c ", ch);
//	}
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	//由于fgetc适用于所有流，所以也可以输出在stdin(标准输入流)
//	ch = fgetc(stdin);
//	printf("%c", ch);
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//向文件中写入一行数据
//	fputs("hello ", pf);
//	fputs("world\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	//适用于所有输出流
//	fputs("hello world\n", stdout);
//	return 0;
//}

//int main()
//{
//	char arr[50] = { 0 };
//	FILE* pf = fopen("data.txt", "r"); 
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//从文件中读取一行数据
//	while(fgets(arr, 5, pf)!=NULL)   //5中包含‘\0’   //读取失败返回NULL
//		printf("%s\n", arr);         //不是一次一行，会读完所有内容
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	//适用于所有输入流
//	fgets(arr,10, stdin);
//	printf("%s", arr);   //敲回车敲入\n
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;
//int main()
//{
//	Stu s = { "张三", 20, 99.5f };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//格式化写入
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;
//int main()
//{
//	Stu s = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//格式化读取
//	fscanf(pf,"%s%d%f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	//关闭文件
//	fclose(pf);
//	pf == NULL;
//	//适用于所有输入流
//	fscanf(stdin, "%s%d%f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;

//int main()
//{
//	char arr[50] = { 0 };
//	Stu s = { "zhangsan", 20, 66.5f };
//	//sprintf可以把结构化的数据转换为一个字符串
//	sprintf(arr ,"%s %d %f", s.name, s.age, s.score);//内容全部转换为字符串
//	printf("%s\n", arr);
//
//	Stu tmp = { 0 };
//	//sscanf可以把一个字符串转化为结构化数据
//	sscanf(arr, "%s%d%f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s%d%f", tmp.name, tmp.age, tmp.score);
//	return 0;
//}

//printf/scanf  -->完成的是标准输入输出流的格式化输入输出语句
//fprintf/fscanf  -->完成的是所有输入输出流的格式化输入输出语句
//sprintf/sscanf  -->完成的是结构体数据与字符串内容的相互转换


//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, 66.5f };
//	FILE* pf = fopen("data.txt", "wb");   //wb二进制形式写入
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fwrite(&s, sizeof(s), 1, pf);  //(数据来源、每个数据大小，数据个数，文件流)
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//}Stu;
//
//int main()
//{
//	struct Stu s = { 0 };
//	FILE* pf = fopen("data.txt", "rb");   //以二进制形式读文件里内容
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fread(&s, sizeof(s), 1, pf);  //(数据存放位置、每个数据大小，数据个数，数据来源文件流)
//	printf("%s %d %f", s.name,s.age, s.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
int main()
{
	FILE* pf = fopen("data.txt", "r");
	int ch;
	while ((ch = fgetc(pf)) != EOF)
	{
		printf("%c ", ch);
	}
	//判断结束类型
	if (ferror(pf))
		printf("因读取错误而结束\n");
	else if (feof(pf))
		printf("因文件末尾而结束\n");
	fclose(pf);
	pf = NULL;
	return 0;
}









 