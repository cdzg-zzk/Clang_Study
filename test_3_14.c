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
//	//д����
//	fputc('a', pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	//����fputc������������������Ҳ���������stdout(��׼�����)
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
//	//���ļ��ж�ȡ�ַ�
//	int ch;
//	while ((ch = fgetc(pf)) != EOF)  // fgetc��ȡʧ�ܺ󷵻�EOF
//	{
//		printf("%c ", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//	//����fgetc������������������Ҳ���������stdin(��׼������)
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
//	//���ļ���д��һ������
//	fputs("hello ", pf);
//	fputs("world\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//	//���������������
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
//	//���ļ��ж�ȡһ������
//	while(fgets(arr, 5, pf)!=NULL)   //5�а�����\0��   //��ȡʧ�ܷ���NULL
//		printf("%s\n", arr);         //����һ��һ�У��������������
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//	//����������������
//	fgets(arr,10, stdin);
//	printf("%s", arr);   //�ûس�����\n
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
//	Stu s = { "����", 20, 99.5f };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ʽ��д��
//	fprintf(pf,"%s %d %f", s.name, s.age, s.score);
//
//	//�ر��ļ�
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
//	//��ʽ����ȡ
//	fscanf(pf,"%s%d%f", s.name, &(s.age), &(s.score));
//	printf("%s %d %f", s.name, s.age, s.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf == NULL;
//	//����������������
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
//	//sprintf���԰ѽṹ��������ת��Ϊһ���ַ���
//	sprintf(arr ,"%s %d %f", s.name, s.age, s.score);//����ȫ��ת��Ϊ�ַ���
//	printf("%s\n", arr);
//
//	Stu tmp = { 0 };
//	//sscanf���԰�һ���ַ���ת��Ϊ�ṹ������
//	sscanf(arr, "%s%d%f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s%d%f", tmp.name, tmp.age, tmp.score);
//	return 0;
//}

//printf/scanf  -->��ɵ��Ǳ�׼����������ĸ�ʽ������������
//fprintf/fscanf  -->��ɵ�����������������ĸ�ʽ������������
//sprintf/sscanf  -->��ɵ��ǽṹ���������ַ������ݵ��໥ת��


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
//	FILE* pf = fopen("data.txt", "wb");   //wb��������ʽд��
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fwrite(&s, sizeof(s), 1, pf);  //(������Դ��ÿ�����ݴ�С�����ݸ������ļ���)
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
//	FILE* pf = fopen("data.txt", "rb");   //�Զ�������ʽ���ļ�������
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fread(&s, sizeof(s), 1, pf);  //(���ݴ��λ�á�ÿ�����ݴ�С�����ݸ�����������Դ�ļ���)
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
	//�жϽ�������
	if (ferror(pf))
		printf("���ȡ���������\n");
	else if (feof(pf))
		printf("���ļ�ĩβ������\n");
	fclose(pf);
	pf = NULL;
	return 0;
}









 