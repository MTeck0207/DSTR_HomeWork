#pragma once

#ifndef LAB4HomeWork_FUNCTION_H_
#define LAB4HomeWork_FUNCTION_H_

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
	double balance;
	double interest_rate;
public:
	void set(int dollars, int cents); //The account balance is set to $dollars.cents;
	void update(); //One year of simple interest is added to account balance

	double get_balance(); //Return the current account balance
	double get_rate(); //Return the current interest rate 
	void set_rate(int rate); // rate is set to interest rate
};

void BankAccount::set(int dollars, int cents)
{
	balance = (double)dollars + ((double)cents / 100);
}

void BankAccount::update()
{
	double SI;
	double t = 1;
	SI = (balance * interest_rate * t) / 100;

	double nbalance;
	nbalance = SI + balance;

	cout << "Your new balance include interest rate is $" << nbalance << endl;
}

double BankAccount::get_balance()
{
	return balance;
}

double BankAccount::get_rate()
{
	return interest_rate;
}

void BankAccount::set_rate(int rate)
{
	interest_rate = rate;
}

class cashRegister
{
private:
	double cashOnHand;
public:
	void CashRegister(); //Update here.
	void acceptAmount(); //Accept amount from customer.
	void printBalance(); //To print the current balance.

};

void cashRegister::CashRegister()
{
	double initialBalance = 500;
	cashOnHand = cashOnHand + initialBalance;

}

void cashRegister::acceptAmount()
{
	cout << "Please enter your amount: " << endl;
	cin >> cashOnHand;
}

void cashRegister::printBalance()
{
	cout << endl;
	cout << "The current balance is : \t" << cashOnHand << endl;
}

class Employee
{
private:
	string name, department, position;
	int idNumber;

public:
	Employee();

	void setEmployee(string a, int b, string c, string d);
	string* getEmployee();
};

Employee::Employee()
{
	name = " ";
	idNumber = 0;
	department = " ";
	position = " ";
}

void Employee::setEmployee(string a, int b, string c, string d)
{
	name = a;
	idNumber = b;
	department = c;
	position = d;
}

string* Employee::getEmployee()
{
	static string r[4];
	r[0] = name;
	r[1] = to_string(idNumber);
	r[2] = department;
	r[3] = position;

	return r;
}

void print()
{
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << endl;
}

#endif /* LAB4_FUNCTION_H_ */
