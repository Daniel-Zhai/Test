#include "TicketMachine.h"
#include<iostream>
using namespace std;
TicketMachine::TicketMachine() {
	showPrompt();
	insertMoney();
	TicketMachine::showTotal();
}

void TicketMachine::showPrompt() {
	cout << "showPrompt" << endl;
}

void TicketMachine::insertMoney(int money) {
	TicketMachine::total += money;
}
void TicketMachine::showTotal() {
	cout << TicketMachine::total << endl;
}