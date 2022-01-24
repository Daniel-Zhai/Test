#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
void getmemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	getmemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
	free(str);
	str = NULL;

}
int main()
{
	Test();
	return 0;
}