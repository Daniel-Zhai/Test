#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//1
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int* p = malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

int main()
{
	int* p = (int*)malloc(40);
	int* ptr = realloc(p, 40);
	if (ptr != NULL)
		p = ptr;
	free(p);
	p = NULL;
}