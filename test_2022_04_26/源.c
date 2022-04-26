#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
//
//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//杨辉三角
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)arr[i][j] = 1;
//			if (i == j)arr[i][j] = 1;
//			if (i >= 2 && j >= 1)arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}printf("\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int killer = 0;
//	int i = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("%c\n", killer);
//	}
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* pa[] = { arr1,arr2,arr3 };//指针数组
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(pa[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}
//数组指针
//int (*p)[] = {0};
//void test()
//{
//	;
//}
//int main()
//{
//	printf("%p", test);
//}

#include<stdlib.h>
#include<assert.h>
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	qsort(arr, 10, 4, cmp);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//左旋字符串
//一个一个旋转
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int n = strlen(arr);
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + n - 1) = tmp;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s", arr);
//	return 0;
//}
//三步反转
//void reverse(char* left, char* right)
//{
//	char tmp = 0;
//	while (left <= right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++; right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	int n = strlen(arr);
//	assert(arr && k <= n);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + n - 1);
//	reverse(arr, arr + n - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	int i = 0;
//	/*while (arr[i])
//	{
//		printf("%c", arr[i++]);
//	}
//	printf("%s", arr);*/
//	
//	return 0;
//}

//判断旋转子串
//1.遍历
//int is_move(char* a1, char* a2)
//{
//	assert(a1 && a2);
//	int len1 = strlen(a1);
//	int len2 = strlen(a2);
//	if (len1 != len2)return 0;
//	int i = 0;
//	for (i = 0; i < len1; i++)
//	{
//		left_move(a1, 1);
//		if (strcmp(a1, a2) == 0)return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char a1[] = "abcdef";
//	char a2[] = "cdefab";
//	int ret = is_move(a1, a2);
//	if (ret == 0)printf("No\n");
//	else printf("Yes\n");
//	return 0;
//}
//2.复制自身
int is_move(char* a3, char* a4)
{
	int len = strlen(a3);
	strncat(a3, a3,len);
	char* pos = strstr(a3, a4);
	if (pos == NULL)return 0;
	else return 1;
}
int main()
{
	char a1[] = "abcdef";
	char a2[] = "cdefab";
	int ret = is_move(a1, a2);
	if (ret == 0)printf("No\n");
	else printf("Yes\n");
	return 0;
}
//int search(int arr[3][3], int k, int* p1, int* p2)
//{
//	int x = 0; int y = *p2 - 1;
//	while (x <= *p1 - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)y--;
//		else if (arr[x][y] < k)x++;
//		else
//		{
//			*p1 = x; *p2 = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret = search(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了，x=%d，y=%d", x + 1, y + 1);
//	}
//	else printf("找不到\n");
//	return 0;
//}