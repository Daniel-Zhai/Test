#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"TicketMachine.h"
using namespace std;
int main()
{
	TicketMachine T;
	T.insertMoney(100);
	T.showPrompt();
	T.showTotal();
	return 0;
}