#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//
//int main()
//{
//	int a[][3] = { 0 };
//	int b[] = { 0 };
//	int i = 0;
//	int j = 0;
//	int c = 0;
//	scanf("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
//	/*int a2[][a[0][1]] = {0};*/
//	/*for (i = 1; i <= a[0][2]; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}*/
//
//	/*for (i = 0; i <= a[0][2]; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}*/
//	//c = 1;
//	//for (i = 0; i < a[0][0]; i++)
//	//{
//	//	for (j = 0; j < a[0][1]; j++)
//	//	{
//	//		if (i == a[c][0]-1 && j == a[c][1]-1)
//	//		{
//	//			printf("%d ", a[c][2]);
//	//			c++;
//	//		}
//	//		else
//	//			printf("0 ");
//	//	}
//	//	printf("\n");
//	//}
//	for (i = 1; i <= a[0][2]; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	while (i < a[0][0] * a[0][1])
//	{
//
//	}
//	return 0;
//}

//KMP
#define MAX 255
typedef struct
{
	char ch[MAX + 1];
	int length;
}SString;
void Get_nextval(SString T, int* nextval)
{
	int i = 1; int j = 0;
	nextval[1] = 0;
	while (i < T.length)
	{
		if (j == 0 || T.ch[i++] == T.ch[j++])
		{
			if (T.ch[i] != T.ch[j])
				nextval[i] = j;
			else
				nextval[i] = nextval[j];
		}
		else
			j = nextval[j];
	}
}

int main()
{
	int i = 0;
	int j = 0;
	int nextval[] = { 0 };
	SString T;
	T.ch[6] = "abcac";
	T.length = 5;
	SString S;
	S.ch[14] = "ababcabcacbab";
	S.length = 13;
	Get_nextval(T, nextval);
	while (i < S.length && j < T.length)
	{
		if (j == 0 || T.ch[j] == S.ch[i])
		{
			i++; j++;
		}
		else
			j = nextval[j];
	}
	if (j >= T.length)
		printf("%d", i - T.length);
	else
		printf("%d", 0);
	return 0;
}