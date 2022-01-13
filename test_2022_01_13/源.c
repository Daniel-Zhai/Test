#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//union MyUnion
//{
//	char c;
//	int i;
//
//};
//int main()
//{
//	union MyUnion un;
//	printf("%d\n", sizeof(un));
//	return 0;
//

//判断大小端
//int check_sys()
//{
//	//union un
//	//{
//	//	char c;
//	//	int i;
//	//}u;
//	//u.i = 1;
//	//return u.c;
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
enum sex
{
	MALE,
	FEMALE
};
int main()
{
	enum sex s = MALE;
}