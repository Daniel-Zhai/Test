#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("******************************************\n");
	printf("*******      1.add      2.del      *******\n");
	printf("*******      3.search   4.modify   *******\n");
	printf("*******      5.show     6.sort     *******\n");
	printf("*******           0.exit           *******\n");
	printf("******************************************\n");
}
int main()
{
	int input = 0;
	struct contact con;
	InitContact(&con);

	do
	{
		menu();
		printf("ÇëÑ¡Ôñ:>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			break;
		case del:
			DelContact(&con);
			break;
		case modify:
			break;
		case show:
			ShowContact(&con);
			break;
		case sort:
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}