#pragma once

#ifndef LAB4HomeWork_CONTROLLER_H_
#define LAB4HomeWork_CONTROLLER_H_

#include "LAB4HomeWork_Function.h"
#include <iostream>

using namespace std;

void runLab4()
{
	cout << endl;
	cout << "--- Welcome to Lab 4 HomeWork ---" << endl;

	int opt;
	cout << "1)  Q1" << endl;
	cout << "2)  Q2" << endl;
	cout << "3)  Q3" << endl;
	cout << "4)  Q4" << endl;
	cout << "5)  Q5" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
	case 1:
	{
		BankAccount ba;

		string a;
		cout << "Please enter you surname: \n";
		cin >> a;

		int x, y;
		cout << "Hi ~ " << a << " . Please kindly enter your balance: (dollars cents) \n";
		cin >> x >> y;
		ba.set(x, y);

		int z;
		cout << "Hi ~ " << a << " . Please kindly enter your intertest rate: (per year)\n";
		cin >> z;
		ba.set_rate(z);

		cout << endl;
		cout << "Your current account balance is: $" << ba.get_balance() << endl;
		cout << "Your intetest rate is: " << ba.get_rate() << "% per year." << endl;
		ba.update();
	}

	case 2:
	{
		cashRegister cr;

		cr.acceptAmount();
		cr.CashRegister();
		cr.printBalance();
	}

	case 3:
	{
		
	}

	case 4:
	{
		
	}

	case 5:
	{

	}

	default:
		break;
	}
}
#endif /* LAB4_CONTROLLER_H_ */