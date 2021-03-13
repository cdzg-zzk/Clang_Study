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


//初始化通讯录
void InitCon(struct Contact* p);

//增加一个联系人
void AddContact(struct Contact* p);

//显示通讯录
void ShowContact(struct Contact* p);

//删除一个联系人
void DelContact(struct Contact* p);

//查找联系人
void FindContact(struct Contact* p);

//修改联系人内容
void ModifyContact(struct Contact* p);

//进行通讯录的排序
void SortContact(struct Contact* p);

//释放空间，销毁通讯录
void DestroyContact(struct Contact* p);