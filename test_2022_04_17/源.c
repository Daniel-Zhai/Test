#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "abc";
//	char b[] = "###########";
//	memset(b, '*', 5);
//	//strcpy(b, a);
//	printf("%s", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d,%d", a, b);
//	return 0;
//}

//�������n��쳲�������
//int Fib(int n) {
//	int a = 1;//��һ����
//	int b = 1;//�ڶ�����
//	int c = 0;//��������
//	int i = 0;
//	if (n <= 2)
//		return 1;
//	for (i = 3; i <= n;i++) {
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	char a[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < strlen(a); i++)
//	{
//		printf("%c", a[i]);
//	}
//	return 0;
//}
// 
// ���ֲ���
//int Binary_Search(int a[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}

//ð������
//void Bubble_Sort(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 0;//�����ź�����Ϊ0
//		for (j = 0; j < sz-1-i; j++)//ÿ��һλ���������Ͷ�һλ�����ţ�i=0ʱ��Ҫ��sz-1�Σ�i+1λ������һλ������Ϊsz-1-i
//		{
//			if (a[j] > a[j + 1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}
// 
// ������
#include"game.h"
void menu()
{
	printf("**********************\n");
	printf("*** 1.play  0.exit ***\n");
	printf("**********************\n");
}
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')break;
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (ret != 'C')break;
	}
	if (ret == '*')printf("���Ӯ\n");
	if (ret == '#')printf("����Ӯ\n");
	if (ret == 'Q')printf("ƽ��\n");
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do {
		printf("������->");
		scanf("%d", &input);
		if (input == 1)
		{
			game(); test();
			return;
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ\n");
		}
		else
			printf("�����������������\n");
	} while (input);
}

int main()
{
	test();
	return 0;
}
