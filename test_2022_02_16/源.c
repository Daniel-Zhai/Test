#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		return 0;
	}
	fgets(buf,1024,pf);
	printf("%s\n", buf);
	fclose(pf);
	pf == NULL;
	return 0;
}