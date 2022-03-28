#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100] = {0};
	char data[100][100] = { 0 };
	int line = 0;
	int row = 0;
	int count = 0;
	int i = 0;
	gets(str);
	//memset(data, 0, sizeof(data));
	while ('\0' != str[count])
	{
		if (' ' != str[count])
		{
			data[line][row] = str[count];
			row++;
			count++;
		}
		else
		{
			data[line][row] = '\0';
			line++;
			count++;
			row = 0;
		}
	}
	for (i = 0; i <= line; i++)
	{
		printf("%s ", data[i]);
		printf("\n");
	}
	return 0;
}