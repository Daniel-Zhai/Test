#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//ģ��ʵ��memcpy
//����ܿ����ڴ�֮���и��ǵ����
//�����
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
		//ǰ-->��
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)src;
			++(char*)dest;
		}
	}
	else//��-->ǰ
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
//����num--��һ�����ʽ��ֵΪnumû��--֮ǰ��ֵ��������++��--��ʹ�ã���++��--
//��num=20����while(20)��Ȼ��num=19;