#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//模拟实现memcpy
//如何能拷贝内存之间有覆盖的情况
//分情况
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)src;
//		++(char*)dest;
//	}
//	return ret;
//}

void* my_memmove(void* dest, const void* src, size_t num)
{
	assert(dest && src);
	void* ret = dest;
	if (dest < src)
	{
		//前-->后
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)src;
			++(char*)dest;
		}
	}
	else//后-->前
	{
		while (num--)
			*((char*)dest + num) = *((char*)src + num);
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[5] = { 0 };
	int i = 0;
	my_memmove(arr1+2, arr1, 12);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}

//while(num--)
//这里num--是一个表达式，值为num没有--之前的值，即后置++或--先使用，再++或--
//如num=20，则while(20)，然后num=19;