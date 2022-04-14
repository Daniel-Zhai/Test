#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
typedef struct
{
	int weight, lch, rch, parent;
}HaffmanNode, *HaffmanTree;

int Select(HaffmanTree T, int n)
{
	int i = 0;
	int min = 0;
	for (i = 2; i <= n; i++)
	{
		min = 1;
		if (T[i].parent == 0)
		{
			if (T[min].weight > T[i].weight)
				min = i;
		}
	}
	return min;
}
void CreateHaffmanTree(HaffmanTree T, int n)
{
	if (n <= 1)return;
	int m = 0;
	int i = 0;
	m = 2n - 1;//2n-1¸öÔªËØ
	T = (HaffmanNode*)malloc((m + 1) * sizeof(int));
	for (i = 1; i <= m; i++)
	{
		T[i].parent = 0;
		T[i].lch= 0;
		T[i].rch = 0;
	}
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &T[i].weight);
	}
	for (i = n + 1; i <= m; i++)
	{
		int s1 = Select(T, i - 1);
		T[s1].parent = i;
		T[i].lch = s1;
		int s2 = Select(T, i - 1);
		T[s2].parent = i;
		T[i].rch = s2;
		T[i].weight = T[s1].weight + T[s2].weight;
	}
}
void print(HaffmanTree T,int n)
{
	int i = 0; int a = n;
	printf("    weight   parent   lch   rch\n");
	for (i = 1; i <= 2a - 1; i++)
	{
		printf("%d   %d  %d   %d   %d\n", i, T[i].weight, T[i].parent, T[i].lch, T[i].rch);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	HaffmanNode T[100] = {0};
	CreateHaffmanTree(T, n);
	print(T,n);
}

