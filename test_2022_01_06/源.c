#define _CRT_SECURE_NO_WARNINGS
//模拟实现strcpy
#include<string.h>
#include<stdio.h>
#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[] = "********";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while ((left < right) && (arr[left] % 2 == 1))	//在前半段找偶数
			left++;
		while ((left < right) && (arr[right] % 2 == 0))	//在后半段找奇数
			right--;
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	move(arr, sz);
	for(i=0;i<sz;i++)
		printf("%d ", arr[i]);
	return 0;
}