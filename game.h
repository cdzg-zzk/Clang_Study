#define _CRT_SECURE_NO_WARNINGS  1

#define NAME_MAX 10
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 30
#define MAX 100

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Peoinform
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
};

struct Contact
{
	struct Peoinform *data;
	int sz;
	int capacity;
};

enum SEX
{
	EXIT=0,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	SORT, 
	SHOW
};


//��ʼ��ͨѶ¼
void InitCon(struct Contact* p);

//����һ����ϵ��
void AddContact(struct Contact* p);

//��ʾͨѶ¼
void ShowContact(struct Contact* p);

//ɾ��һ����ϵ��
void DelContact(struct Contact* p);

//������ϵ��
void FindContact(struct Contact* p);

//�޸���ϵ������
void ModifyContact(struct Contact* p);

//����ͨѶ¼������
void SortContact(struct Contact* p);

//�ͷſռ䣬����ͨѶ¼
void DestroyContact(struct Contact* p);