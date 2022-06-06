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

		break;
	}

	case 2:
	{
		cashRegister1 cr;

		cr.acceptAmount();
		cr.CashRegister();
		cr.printBalance();

		break;
	}

	case 3:
	{
		print();
		cout << "Name\t\t" << "ID Number\t\t" << "Department\t\t" << "Position\t\t" << endl;
		print();

		string* r;

		Employee emp1;
		emp1.setEmployee("Susan", 47899, "Accounting", "Vice President");
		r = emp1.getEmployee();
		cout << r[0] << "\t\t" << r[1] << "\t\t\t" << r[2] << "\t\t" << r[3] << "\t\t" << endl;
		print();

		Employee emp2;
		emp2.setEmployee("Matthew", 34522, "IT", "Programmer");
		r = emp2.getEmployee();
		cout << r[0] << "\t\t" << r[1] << "\t\t\t" << r[2] << "\t\t\t" << r[3] << "\t\t" << endl;
		print();

		Employee emp3;
		emp3.setEmployee("James", 65881, "Manufacturing", "Engineer");
		r = emp3.getEmployee();
		cout << r[0] << "\t\t" << r[1] << "\t\t\t" << r[2] << "\t\t" << r[3] << "\t\t" << endl;
		print();

		break;
	}

	case 4:
	{
		cout << "Please enter the data follow by number of birth, number of death and the population:" << endl;

		population p;

		int a, b, c;
		cin >> a >> b >> c;
		cout << endl;

		while (a < 0 && b < 0 && c < 1)
		{
			cout << "Error! The birth and death should be more than 0 while the population should more than 1." << endl;
			cout << "Enter the data again: " << endl;
			cin >> a >> b >> c;
			cout << endl;
		}

		p.setPopulation(a, b, c);

		cout << "Birth rate = " << a << " / " << c << " = " << p.getBirthRate() << endl;
		cout << "Death rate = " << b << " / " << c << " = " << p.getDeathRate() << endl;

		break;
	}

	case 5:
	{
		dispenserType dt1;
		dispenserType dt2;
		dispenserType dt3;
		dispenserType dt4;
		cashRegister cr;

		char cont;

		do
		{
			system("CLS");
			print2();
			cout << "\t\t\t\t Welcome to Fruit Juice Machine" << endl;
			print2();
			cout << endl;

			cout << "No. \t\t\t Name\t\t\t Number of Item \t\t\t Cost" << endl;
			print1();

			cout << "1. \t\t\t Apple Juice \t\t\t" << dt1.getNoOfItems() << "\t\t\t\t" << dt1.getCost() << endl;
			cout << "2. \t\t\t Orange Juice \t\t\t" << dt2.getNoOfItems() << "\t\t\t\t" << dt2.getCost() << endl;
			cout << "3. \t\t\t Mango Lassi \t\t\t" << dt3.getNoOfItems() << "\t\t\t\t" << dt3.getCost() << endl;
			cout << "4. \t\t\t Fruit Punch \t\t\t" << dt4.getNoOfItems() << "\t\t\t\t" << dt4.getCost() << endl;

			cout << "Please select your item by the number." << endl;
			int no;
			cin >> no;

			switch (no)
			{
			case 1:
			{
				if (dt1.getNoOfItems() > 0)
				{
					cout << "Please select the number of item." << endl;
					int q;
					cin >> q;

					int p;
					p = q * 50;
					int m;
					cout << "Please enter the money in cents which is " << p << endl;
					cin >> m;

					while (m < q && m < cr.getCurrentBalance())
					{
						cout << "Please enter the money in cents which is " << p << endl;
						cin >> m;
					}
					cr.acceptAmount(p, m);
					cout << "Your change is " << m - p << endl;

					for (int i = 0; i < q; i++) {
						dt1.makeSale();
					}
					break;
				}
				else
				{
					cout << "Please try again. This product had sold out." << endl;
					break;
				}

			}
			case 2:
			{
				if (dt2.getNoOfItems() > 0)
				{
					cout << "Please select the number of item." << endl;
					int q;
					cin >> q;

					int p;
					p = q * 50;
					int m;
					cout << "Please enter the money in cents which is " << p << endl;
					cin >> m;

					while (m < q && m < cr.getCurrentBalance())
					{
						cout << "Please enter the money in cents which is " << p << endl;
						cin >> m;
					}
					cr.acceptAmount(p, m);

					cout << "Your change is " << m - p << endl;
					for (int i = 0; i < q; i++) {
						dt2.makeSale();
					}
					break;
				}
				else
				{
					cout << "Please try again. This product had sold out." << endl;
					break;
				}
			}
			case 3:
			{
				if (dt3.getNoOfItems() > 0)
				{
					cout << "Please select the number of item." << endl;
					int q;
					cin >> q;

					int p;
					p = q * 50;
					int m;
					cout << "Please enter the money in cents which is " << p << endl;
					cin >> m;

					while (m < q && m < cr.getCurrentBalance())
					{
						cout << "Please enter the money in cents which is " << p << endl;
						cin >> m;
					}
					cr.acceptAmount(p, m);
					cout << "Your change is " << m - p << endl;

					for (int i = 0; i < q; i++) {
						dt3.makeSale();
					}
					break;
				}
				else
				{
					cout << "Please try again. This product had sold out." << endl;
					break;
				}
			}
			case 4:
			{
				if (dt4.getNoOfItems() > 0)
				{
					cout << "Please select the number of item." << endl;
					int q;
					cin >> q;

					int p;
					p = q * 50;
					int m;
					cout << "Please enter the money in cents which is " << p << endl;
					cin >> m;

					while (m < q && m < cr.getCurrentBalance())
					{
						cout << "Please enter the money in cents which is " << p << endl;
						cin >> m;
					}
					cr.acceptAmount(p, m);
					cout << "Your change is " << m - p << endl;

					for (int i = 0; i < q; i++) {
						dt4.makeSale();
					}
					break;
				}
				else
				{
					cout << "Please try again. This product had sold out." << endl;
					break;
				}
			}

			default:
				break;
			}

			cout << "The current balance is: " << cr.getCurrentBalance() << endl;
			cout << "Do you want to continue? Y for yes." << endl;
			cin >> cont;
		} while (cont == 'Y' || cont == 'y');

		break;
	}

	default:
		break;
	}
}
#endif /* LAB4_CONTROLLER_H_ */