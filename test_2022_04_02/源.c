#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	int k = 0;
//	int A = 0;//ϵ��
//	int m = 0;//�η�
//	int B = 0;//ϵ��
//	int n = 0;//�η�
//	int a[10] = { 0 };
//	int b[10] = { 0 };
//	int c[20] = { 0 };
//	while(~scanf("%d",&a[i++]))//(ctrl+z)*3�˳�ѭ��
//	{
//		
//	}
//	while (~scanf("%d",&b[j]))
//	{
//		j++;
//	}
//	i = 0;
//	while (i<=10)
//	{
//		c[k] = a[i] + b[i];
//		k++;
//		i++;
//	}
//	i = 0;
//	while(i<10)
//	{
//		if(c[i]!=0)
//			printf("%dx%d ", c[i], i);
//		i++;
//	}
//	return 0;
//}
typedef struct
{
	char num[10];
	char name[10];
	int score;
}Elemtype;

typedef struct Lnode//���
{
	Elemtype data;
	struct Lnode* next;
}Lnode,*Linklist;

int main()
{
	Linklist L = (Linklist)malloc(sizeof(Lnode));//����L
	L->data.num[10] = "0";
	L->data.name[10] = "0";
	L->data.score = 0;
	L->next = NULL;
	Lnode* p = (Lnode*)malloc(sizeof(Lnode));
	p->data.num[8] = "1234567";
	p->data.name[9] = "����";
	p->data.score = 80;
	p->next = NULL;
	L->next = p;//��Ԫ���
	Lnode* b = (Lnode*)malloc(sizeof(Lnode));
	b->data.num[9] = "0123456";
	b->data.name[9] = "����";
	b->data.score = 90;
	p->next = b;
	b->next = NULL;
	printf("%s", p->data.num);
	return 0;
}


//typedef struct Lnode//���
//{
//	int data;
//	struct Lnode* next;
//}Lnode, * Linklist;
//
//int main()
//{
//	Linklist L = (Linklist)malloc(sizeof(Lnode));//����L
//	Lnode* p = (Lnode*)malloc(sizeof(Lnode));
//	L->next = p;//��Ԫ���
//	p->data = 80;
//	p->next = NULL;
//	printf("%d", p->data);
//	return 0;
//}
//int main()
//{
//	char a[10] = "123456";
//	printf("%s", a);
//}