#pragma once

#ifndef LAB3HomeWork_CONTROLLER_H_
#define LAB3HomeWork_CONTROLLER_H_

#include "LAB3HomeWork_Function.h"
#include <iostream>
#include <iomanip>

using namespace std;

void runLab3()
{
	cout << endl;
	cout << "--- Welcome to Lab 3 HomeWork ---" << endl;

	int opt;
	cout << "1)  Q1" << endl;
	cout << "2)  Q2" << endl;
	cout << "3)  Q3" << endl;
	cout << "4)  Q4" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
	case 1:
	{
		double measurement;
		cout << "Enter a length in inches, and I will convert\n";
		cout << "it to centimeters: ";
		cin >> measurement;
		convert(&measurement);
		cout << fixed << setprecision(4);
		cout << "Value in centimeters: " << measurement << endl;
	}

	case 2:
	{
		double Length;
		getLength(&Length);

		double Width;
		getWidth(&Width);

		double Area;
		getArea(&Area, &Length, &Width);

		displayData(&Area, &Length, &Width);	
	}

	default:
		break;
	}
}
#endif /* LAB3_CONTROLLER_H_ */