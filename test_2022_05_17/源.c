#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main()
{
	/*char arr[] = "2553182585@qq.com";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = NULL;
	char* a[3] = {0};
	int i = 0;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p),i++) {
		a[i] = ret;
		printf("%s\n", a[i]);
	}*/
	char* s = "Golden Global View";
	char d[20];
	memcpy(d, s, strlen(s));
	// ��Ϊ��d[0]��ʼ���ƣ��ܳ���Ϊstrlen(s)��d[strlen(s)]��Ϊ������
	d[strlen(s)] = '\0';
	printf("%s", d);

	// ִ�н��
	//Golden Global View

	return 0;
}