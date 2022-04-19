#define _CRT_SECURE_NO_WARNINGS
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int status;
typedef char ElemType;
#define MaxSize 100

//void exit(int value)
//{
//
//}
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
//status InitList(SqList& L)
//{
//	L.elem = new Book[MaxSize];
//	if (!L.elem)exit(OVERFLOW);
//	L.length = 0;
//	return OK;
//}
//
//status Getelem(SqList L£¬int i, Book& e)
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
//		if (L.elem[i].ISBN == e.ISBN)return i + 1;
//	}
//}
//status ListInsert(SqList& L, int i, ElemType e)
//{
//	if (i<1 || i>L.length + 1)return ERROR;
//	if (L.length == MaxSize)return ERROR;//´æ´¢ÒÑÂú
//	int j = 0;
//	for (j = L.length - 1; j >= i - 1; j--)
//	{
//		L.elem[j + 1] = L.elem[j];	
//	}
//	L.elem[i-1] = e;
//	++L.length;
//	return OK;
//}
//status InitList(Linklist& L)
//{
//	L = new Lnode;
//	L->next = NULL;
//	return OK;
//}
//
//status Getelem(Linklist& L, int i, ElemType e)
//{
//	p = L->next; int j = 1;
//	while (p && j < i)
//	{
//		p = p->next;
//		++j;
//	}
//	if (!p || j > i)
//	{
//		return ERROR;
//	}
//	e = p->data;
//	return OK;
//}
//int main()
//{
//	SqList L;
//	InitList(L);
//	return 0;
//}
