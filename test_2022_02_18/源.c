#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//	fputc('t', pfWrite);
//	fclose(pfWrite);
//	pfWrite == NULL;
//	return 0;
//}

int main()
{
	FILE* pfRead = fopen("test.txt", "r");
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	printf("%c", fgetc(pfRead));
	fclose(pfRead);
	pfRead == NULL;
	return 0;
}