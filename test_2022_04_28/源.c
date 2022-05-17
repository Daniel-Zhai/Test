#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n = 0;
	int sum = 0;
	char ch = 0;
	while (~scanf("%d", &n))
	{
		while ((ch = getchar()) == ' ');
		ungetc(ch, stdin);
		sum += n;
		//while ((ch = getchar()) == ' ');
		if (ch == '\n')break; 
		//ungetc(ch, stdin);
	}
	printf("%d", sum);
	return 0;
}
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	while (~scanf("%d", &n))
//	{
//		sum += n;
//		if (getchar() == '\n')break;
//	}
//	printf("%d", sum);
//	return 0;
//}