#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
typedef struct
{
	int weight, lch, rch, parent;
}HaffmanNode, *HaffmanTree;

int Select(HaffmanTree T, int n, int s1,int s2)
{
	int i = 0;
	for (i = 1; i <= n; i++)
	{
		if (T[i].parent == 0)
		{

		}
	}
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
		Select(T, i - 1, s1, s2);
		T[s1].parent = i;
		T[s2].parent = i;
		T[i].lch = s1;
		T[i].rch = s2;
		T[i].weight = T[s1].weight + T[s2].weight;
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	HaffmanTree T;
	CreateHaffmanTree(T, n)
}