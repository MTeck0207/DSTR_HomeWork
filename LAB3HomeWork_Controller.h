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

	case 3:
	{
		int* Array;
		int Size;
		cout << "Please enter the number of subject: ";
		cin >> Size;
		Array = new int[Size];

		cout << "Please enter the mark accordingly: \n";
		int n;
		for (int i = 0; i < Size; i++)
		{
			cout << "Mark " << i + 1 << " : ";
			cin >> n;
			while (n > 100 || n <= 0)
			{
				cout << "Error! number should in range of (1 to 100)." << endl;
				cout << "Enter the number again: ";
				cin >> n;
			}
			Array[i] = n;
		}

		int Average = 0;
		int Sum = 0;

		calcAverage(Array, Size, &Average, &Sum);

		int Lowest = 0;
		findLowest(Array, Size, &Lowest);

		cout << endl;
		cout << "Number of Subject: \n" << Size << endl;
		cout << "Marks of the Subject: \n";
		for (int i = 0; i < Size; i++)
		{
			cout << Array[i] << "\t";
		}
		cout << endl;
		cout << "The sum of the marks: \n" << Sum << endl;
		cout << "The average mark: \n" << Average << endl;
		cout << "The lowest mark: \n" << Lowest << endl;
	}

	case 4:
	{
		string Answer[20] = { "B","D","A","A","C","A","B","A","C","D","B","C","D","A","D","C","C","B","D","A" };
		string User[20];

		cout << "Please enter your answer: " << endl;

		for (int i = 0; i < 20; i++)
		{
			string a;
			cout << i + 1 << ".   ";
			cin >> a;

			while (a != "A" && a != "B" && a != "C" && a != "D")
			{
				cout << "Error! Answer should in the letters of A, B, C, or D." << endl;
				cout << "Enter the answer again: ";
				cin >> a;
			}
			User[i] = a;
		}

		cout << endl;
		int correct = 0;
		checkAnswer(Answer, User, &correct);
		checkPass(correct);
	}

	default:
		break;
	}
}
#endif /* LAB3_CONTROLLER_H_ */