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
	// 因为从d[0]开始复制，总长度为strlen(s)，d[strlen(s)]置为结束符
	d[strlen(s)] = '\0';
	printf("%s", d);

	// 执行结果
	//Golden Global View

	return 0;
}