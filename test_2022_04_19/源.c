#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//#include<stdlib.h>
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//typedef int status;
//typedef char ElemType;
//#define MaxSize 100
//////顺序表的存储结构
////typedef struct {
////	ElemType* elem;
////	int length;
////}SqList;
//
////typedef struct {
////	float coef;//系数
////	int expn;//指数
////}Polynomial;
////
////typedef struct {
////	Polynomial* elem;
////	int length;
////}SqList;
//
//
//typedef struct {
//	char ISBN[20];
//	char name[50];
//	float price;
//}Book;
//
//typedef struct {
//	Book* elem;
//	int length;
//}SqList;
//
//status InitList(SqList &L)
//{
//	L.elem = new Book[MaxSize];
//	if (!L.elem)exit(OVERFLOW);
//	L.length = 0;
//	return OK;
//}
//
//status Getelem(SqList L，int i,Book &e)
//{
//	if (i<1 || i>L.length)return ERROR;
//	e = L.elem[e - 1];
//	return OK;
//}
//int LocateElem(SqList L, Book e)
//{
//	int i = 0;
//	for (i = 0; i < L.length; i++)
//	{
//		if (L.elem == e)return i + 1;
//	}
//}
//int main()
//{
//	SqList L;
//	InitList(L);
//	return 0;
//}
int islowwer(char c)
{
	return 'a' <= c && c <= 'z';
}
char Getupper(char c)
{
	return c - 'a' + 'A';
}
int main()
{
	char c;
	while (scanf("%c", &c) != EOF)
	{
		if (islowwer(c)) {
			c = Getupper(c);
		}
		printf("%c\n", c);
	}
	return 0;
}

