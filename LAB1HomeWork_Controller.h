#pragma once

#ifndef LAB1HomeWork_CONTROLLER_H_
#define LAB1HomeWork_CONTROLLER_H_

#include "LAB1HomeWork_Function.h"
#include <iostream>

using namespace std;

void runLab1()
{
	cout << endl;
	cout << "--- Welcome to Lab 1 HomeWork ---" << endl;

	int opt;
	cout << "1)  Q1" << endl;
	cout << "2)  Q2" << endl;
	cout << "2)  Q3" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
	case 1:
	{
		int food1;
		cout << "price of food: " << endl;
		cin >> food1;

		double tip;
		cout << "Tips: " << endl;
		cin >> tip;

		double GST = 0.06;
		double GSTFood1 = (food1 * GST) + food1;
		cout << "food with tips\n" << food1 + tip << endl;
		cout << "food after GST\n" << GSTFood1 << endl;
		cout << "food after GST plus tips\n" << GSTFood1 + tip << endl;

		break;

	}
	case 2:
	{
		int days;
		string mth;
		int yr;
		cout << "Enter Your Month (e.g August 2019) : ";
		cin >> mth;
		cin >> yr;
		days = getNumberOfDays(mth, yr);

		int i;
		char w;
		int h = 0, r = 0, c = 0;

		for (i = 1; i <= days; i++)
		{
			cout << "Day" << i << ": Enter 'H' for Hot, 'R' for Rainy, 'C' for Cloudy, ('E' to end) : ";
			cin >> w;

			if (w == 'H' || w == 'h')
			{
				h = h + 1;
			}
			else if (w == 'R' || w == 'r')
			{
				r = r + 1;
			}
			else if (w == 'C' || w == 'c')
			{
				c = c + 1;
			}
			else if (w == 'E' || w == 'e')
			{
				exit(0);
			}
		}
		cout << endl;

		cout << endl << "Number of hot days this month:  " << h;
		cout << endl << "Number of rainy days this month:  " << r;
		cout << endl << "Number of cloudy days this month:  " << c;

		break;
	}
	case 3:
	{
		int a, b, c;
		cout << "\n\n Enter number of rows (for diamond (triangle) dimension) \n";
		cin >> c;
		for (a = 0; a <= c; a++)
		{
			for (b = 1; b <= c - a; b++)
				cout << " ";
			for (b = 1; b <= 2 * a - 1; b++)
				cout << "*";
			cout << endl;
		}
		for (a = c - 1; a >= 1; a--)
		{
			for (b = 1; b <= c - a; b++)
				cout << " ";
			for (b = 1; b <= 2 * a - 1; b++)
				cout << "*";
			cout << endl;
		}
		break;
	}
	
	default:
		break;
	}
}
#endif /* LAB1_CONTROLLER_H_ */