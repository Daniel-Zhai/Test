#pragma once
class TicketMachine
{	
public:
	TicketMachine();
	void showPrompt();
	void insertMoney(int money);
	//void showBalance();
	//void printTicket();
	void showTotal();
private:
	//const int PRICE;
	int total;
	int balance;
};

