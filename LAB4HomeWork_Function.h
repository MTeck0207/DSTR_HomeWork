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

class cashRegister1
{
private:
	double cashOnHand;
public:
	void CashRegister(); //Update here.
	void acceptAmount(); //Accept amount from customer.
	void printBalance(); //To print the current balance.

};

void cashRegister1::CashRegister()
{
	double initialBalance = 500;
	cashOnHand = cashOnHand + initialBalance;

}

void cashRegister1::acceptAmount()
{
	cout << "Please enter your amount: " << endl;
	cin >> cashOnHand;
}

void cashRegister1::printBalance()
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

class population
{
private:
	int numberOfBirth, numberOfDeath, Population;
	double birthRate, deathRate;

public:
	void setPopulation(int nob, int nod, int p);

	double getBirthRate();
	double getDeathRate();
};

void population::setPopulation(int nob, int nod, int p)
{
	numberOfBirth = nob;
	numberOfDeath = nod;
	Population = p;
}

double population::getBirthRate()
{
	birthRate = (double)numberOfBirth / (double)Population;
	return birthRate;
}


double population::getDeathRate()
{
	deathRate = (double)numberOfDeath / (double)Population;
	return deathRate;
}

class cashRegister
{
private:
	int cashOnHand; //an int variable that holds the cash in the register.

public:
	int getCurrentBalance(); //Function to show the current amount in the cash register.

	void acceptAmount(int p, int m); //Function to receive the amount deposited by the customer and update the amount in the register

	cashRegister(); //Default constructor to set the cash in the register to 500 cents.
	cashRegister(int a); //Constructor with parameters to set the cash in the register to a specific amount.
};

int cashRegister::getCurrentBalance()
{
	return cashOnHand;
}

void cashRegister::acceptAmount(int p, int m)
{
	cashOnHand = cashOnHand + p - (m - p);
}

cashRegister::cashRegister()
{
	cashOnHand = 500;
}

cashRegister::cashRegister(int a)
{
	cashOnHand = a;
}

class dispenserType
{
private:
	int numberOfItems; //variable to store the number of items in the dispenser.
	int cost; //variable to store the cost of an item. 

public:
	int getNoOfItems();  //Function to show the number of items in the machine.
	int getCost(); //Function to show the cost of the item.

	void makeSale(); //Function to reduce the number of items by 1.

	dispenserType(); //Default constructor to set the cost and number of items in the dispenser to 50.
	dispenserType(int a, int b); //Constructor with parameters to set the costand number of items in the dispenser.
};

int dispenserType::getNoOfItems()
{
	return numberOfItems;
}

int dispenserType::getCost()
{
	return cost;
}

void dispenserType::makeSale()
{
	numberOfItems = numberOfItems - 1;
}

dispenserType::dispenserType()
{
	numberOfItems = 50;
	cost = 50;
}

dispenserType::dispenserType(int a, int b)
{
	numberOfItems = a;
	cost = b;
}

void print1()
{
	for (int i = 0; i < 100; i++) {
		cout << "-";
	}
	cout << endl;
}

void print2()
{
	for (int i = 0; i < 100; i++) {
		cout << "=";
	}
	cout << endl;
}

#endif /* LAB4_FUNCTION_H_ */
