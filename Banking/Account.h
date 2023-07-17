#pragma once
#include<iostream>
using namespace std;


class Account
{
private:
	long accountNumber;
	string firstName;
	string lastName;
	float balance;
	static long NextAccountNumber;
public:
	Account() {}
	Account(string fname, string lname, float balance);
	long getAccNo() { return accountNumber; }
	string getFirstName() { return firstName; }
	string getLastName() { return lastName; }
	float getBalance() { return balance; }

	void Deposit(float amount);
	void Withdraw(float amount);
	static void setLastAccountNumber(long accountNumber);
	static long getLastAccountNumber();
	friend ofstream& operator<<(ofstream& ofs, Account& acc);
	friend ifstream& operator>>(ifstream& ifs, Account& acc);
	friend ostream& operator<<(ostream& os, Account& acc);

};


