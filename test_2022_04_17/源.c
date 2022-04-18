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

//迭代求第n个斐波那契数
//int Fib(int n) {
//	int a = 1;//第一个数
//	int b = 1;//第二个数
//	int c = 0;//第三个数
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
// 二分查找
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

//冒泡排序
//void Bubble_Sort(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 0;//若已排好序则为0
//		for (j = 0; j < sz-1-i; j++)//每排一位，数组后面就多一位不用排，i=0时，要排sz-1次，i+1位，少排一位，所以为sz-1-i
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
// 三子棋
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
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
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
	if (ret == '*')printf("玩家赢\n");
	if (ret == '#')printf("电脑赢\n");
	if (ret == 'Q')printf("平局\n");
}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	menu();
	do {
		printf("请输入->");
		scanf("%d", &input);
		if (input == 1)
		{
			game(); test();
			return;
		}
		else if (input == 0)
		{
			printf("退出游戏\n");
		}
		else
			printf("输入错误，请重新输入\n");
	} while (input);
}

int main()
{
	test();
	return 0;
}
