#define _CRT_SECURE_NO_WARNINGS

//typedef struct inf
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}inf;
//print(inf* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	inf zs = { "����",40,"18686868686","��" };
//	print(&zs);
//	return 0;
//}
//����ˮ��1ƿ1Ԫ��2����ƿ��1ƿ��20Ԫ�ȼ�ƿ
//int main()
//{
//	int money = 0;
//	int empty = 0;
//	int num = 0;
//	scanf("%d", &money);
//	num = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		num += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("�ܹ�����%dƿ\n", num);
//	return 0;
//}

//�����ַ���
#include<stdio.h>
#include<assert.h>
#include<string.h>
//void reverse(char* pa)
//{
//	assert(pa);
//	int len = strlen(pa);
//	char* left = pa;
//	char* right = pa + len - 1;
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abc defg";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//��һ�������洢���ڴ��еĶ������е�1�ĸ���
//��λ��
//int main()
//{
//	unsigned int i = 0;
//	int count = 0;
//	scanf("%d", &i);
//	while (i)
//	{
//		if (i & 1)
//			count++;
//		i = i >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	unsigned int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("%d\n", count);
//	return 0;
//}

int main()
{
	unsigned int num = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &num);
	while (num)
	{
		if (num % 2)
		{
			count++;
			num = num / 2;
		}
	}
	printf("%d\n", count);
	return 0;
}