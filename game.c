
#define _CRT_SECURE_NO_WARNINGS  1

#include "game.h"

void InitCon(struct Contact* p)
{
	p->sz = 0;
	p->capacity = 3;
	p->data = (struct Peoinform*)calloc(p->capacity, sizeof(struct Peoinform));
	if (p->data == NULL)
	{
		printf("空间开辟失败\n");
		exit(1);
	}
}



void AddContact(struct Contact* p)
{
	if (p->sz == p->capacity)
	{
		struct Peoinform* ptr = (struct Peoinform*)realloc(p->data, (p->capacity + 2)*sizeof(struct Peoinform));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += 2;
			printf("扩容成功\n");
		}
		else
		{
			printf("通讯录扩容失败\n");
			return;
		}
	}
		printf("请输入姓名:>");
		scanf("%s", p->data[p->sz].name);
		printf("请输入性别:>");
		scanf("%s", p->data[p->sz].sex);
		printf("请输入年龄:>");
		scanf("%d", &(p->data[p->sz].age));
		printf("请输入电话:>");
		scanf("%s", p->data[p->sz].tel);
		printf("请输入地址:>");
		scanf("%s", p->data[p->sz].addr);
		p->sz++;
}

void ShowContact(struct Contact* p)
{
	printf("%-10s%-5s\t%-5s\t%-20s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		printf("%-10s%-5s\t%-5d\t%-20s%-30s\n", p->data[i].name,
									   p->data[i].sex,
									   p->data[i].age,
									   p->data[i].tel,
									   p->data[i].addr);
	}
}
int FindByName(char* str, struct Contact* p)
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (0 == strcmp(str, p->data[i].name))
			return i;
	}
	return -1;
}
void DelContact(struct Contact* p)
{
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除联系人的名字:>");
	scanf("%s", name);
	int ret = FindByName(name, p);
	if (-1 == ret)
	{
		printf("通讯录查无此人\n");
	}
	else
	{
		int i = ret;
		for (i; i < p->sz - 1; i++)
		{
			p->data[i] = p->data[i + 1];
		}
		p->sz--;
	}
}


void FindContact(struct Contact* p)
{
	char name[NAME_MAX] = { 0 };
	printf("输入要查找的名字:>");
	scanf("%s", name);
	int ret = FindByName(name, p);
	if (-1 == ret)
	{
		printf("通讯录查无此人\n");
	}
	else
	{
		printf("%-10s%-5s\t%-5s\t%-20s%-30s\n", "姓名", "性别", "年龄", "电话", "地址");
		printf("%-10s%-5s\t%-5d\t%-20s%-30s\n", p->data[ret].name,
			p->data[ret].sex,
			p->data[ret].age,
			p->data[ret].tel,
			p->data[ret].addr);
	}
}

void ModifyContact(struct Contact* p)
{
	char name[NAME_MAX] = { 0 };
	printf("输入要查找的名字:>");
	scanf("%s", name);
	int ret = FindByName(name, p);
	if (-1 == ret)
	{
		printf("通讯录查无此人\n");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", p->data[ret].name);
		printf("请输入性别:>");
		scanf("%s", p->data[ret].sex);
		printf("请输入年龄:>");
		scanf("%d", &(p->data[ret].age));
		printf("请输入电话:>");
		scanf("%s", p->data[ret].tel);
		printf("请输入地址:>");
		scanf("%s", p->data[ret].addr);
		printf("修改成功\n");
	}
}

int cmp_by_name(const void* e1, const void*e2)
{
	
	return strcmp(((struct Peoinform*)e1)->name , ((struct Peoinform*)e2)->name);
}
void SortContact(struct Contact* p)
{
	qsort(p->data, p->sz,sizeof(p->data[0]), cmp_by_name);
	printf("排序成功\n");
}

void DestroyContact(struct Contact* p)
{
	free(p->data);
	p->data = NULL;
	p->data = 0;
	p->sz = 0;
}





