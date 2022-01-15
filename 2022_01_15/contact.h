#define _CRT_SECURE_NO_WARNINGS

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>

enum Option
{
	exit,
	add,
	del,
	search,
	modify,
	show,
	sort
};

struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[MAX_ADDR];
};

struct contact
{
	struct PeoInfo data[MAX];
	int size;
};

void InitContact(struct contact* ps);
void AddContact(struct contact* ps);
void DelContact(struct contact* ps);
void ShowContact(const struct contact* ps);