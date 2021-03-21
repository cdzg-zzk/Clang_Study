
#define _CRT_SECURE_NO_WARNINGS  1

#include "game.h"

void InitCon(struct Contact* p)
{
	p->sz = 0;
	p->capacity = 3;
	p->data = (struct Peoinform*)calloc(p->capacity, sizeof(struct Peoinform));
	if (p->data == NULL)
	{
		printf("�ռ俪��ʧ��\n");
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
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("ͨѶ¼����ʧ��\n");
			return;
		}
	}
		printf("����������:>");
		scanf("%s", p->data[p->sz].name);
		printf("�������Ա�:>");
		scanf("%s", p->data[p->sz].sex);
		printf("����������:>");
		scanf("%d", &(p->data[p->sz].age));
		printf("������绰:>");
		scanf("%s", p->data[p->sz].tel);
		printf("�������ַ:>");
		scanf("%s", p->data[p->sz].addr);
		p->sz++;
}

void ShowContact(struct Contact* p)
{
	printf("%-10s%-5s\t%-5s\t%-20s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("������Ҫɾ����ϵ�˵�����:>");
	scanf("%s", name);
	int ret = FindByName(name, p);
	if (-1 == ret)
	{
		printf("ͨѶ¼���޴���\n");
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
	printf("����Ҫ���ҵ�����:>");
	scanf("%s", name);
	int ret = FindByName(name, p);
	if (-1 == ret)
	{
		printf("ͨѶ¼���޴���\n");
	}
	else
	{
		printf("%-10s%-5s\t%-5s\t%-20s%-30s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
	printf("����Ҫ���ҵ�����:>");
	scanf("%s", name);
	int ret = FindByName(name, p);
	if (-1 == ret)
	{
		printf("ͨѶ¼���޴���\n");
	}
	else
	{
		printf("����������:>");
		scanf("%s", p->data[ret].name);
		printf("�������Ա�:>");
		scanf("%s", p->data[ret].sex);
		printf("����������:>");
		scanf("%d", &(p->data[ret].age));
		printf("������绰:>");
		scanf("%s", p->data[ret].tel);
		printf("�������ַ:>");
		scanf("%s", p->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}

int cmp_by_name(const void* e1, const void*e2)
{
	
	return strcmp(((struct Peoinform*)e1)->name , ((struct Peoinform*)e2)->name);
}
void SortContact(struct Contact* p)
{
	qsort(p->data, p->sz,sizeof(p->data[0]), cmp_by_name);
	printf("����ɹ�\n");
}

void DestroyContact(struct Contact* p)
{
	free(p->data);
	p->data = NULL;
	p->data = 0;
	p->sz = 0;
}





