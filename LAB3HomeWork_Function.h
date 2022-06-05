#pragma once

#ifndef LAB3HomeWork_FUNCTION_H_
#define LAB3HomeWork_FUNCTION_H_

#include <iostream>
#include <numeric>

using namespace std;

void convert(double *measurements);

void convert(double *measurements)
{
    *measurements = 2.54 * *measurements;
}

void getLength(double* Length);
void getWidth(double* Width);
void getArea(double* Area, double* Length, double* Width);
void displayData(double* Area, double* Length, double* Width);

void getLength(double* Length)
{
	cout << "Enter the length of the rectangle: \n";
	cin >> *Length;
}

void getWidth(double* Width)
{
	cout << "Enter the width of the rectangle: \n";
	cin >> *Width;
}


void getArea(double* Area, double* Length, double* Width)
{
	*Area = *Length * *Width;
}

void displayData(double* Area, double* Length, double* Width)
{
	cout << endl;
	cout << "The length of the rectangle: \t" << *Length << endl;
	cout << "The width of the rectangle: \t" << *Width << endl;
	cout << "The area of the rectangle: \t" << *Area << endl;
}

void calcAverage(int Array[], int Size, int* Average, int* Sum);
void findLowest(int Array[], int Size, int* Lowest);

void calcAverage(int Array[], int Size, int* Average, int* Sum)
{
	*Sum = accumulate(Array, Array + Size, *Sum);
	*Average = *Sum / Size;
}

void findLowest(int Array[], int Size, int* Lowest)
{
	*Lowest = Array[0];
	for (int i = 0; i < Size; i++) {
		if (*Lowest > Array[i]) {
			*Lowest = Array[i];
		}
	}
}

void checkAnswer(string Answer[], string User[], int* correct, int* wrong);
void checkPass(int correct, int wrong);

void checkAnswer(string Answer[], string User[], int* correct, int* wrong)
{
	for (int i = 0; i < 20; i++)
	{
		if (Answer[i] == User[i])
		{
			*correct = *correct + 1;
		}
		else
		{
			*wrong = *wrong + 1;
		}
	}
}

void checkPass(int correct, int wrong)
{
	if (correct >= 15)
	{
		cout << "CONGRATULATION!!! You had pass the exam !!!" << endl;
		cout << "Your result is " << correct << " out of 20." << endl;
	}
	else
	{
		cout << "SADGE ~ You had fail the exam, LMAO" << endl;
		cout << "Your result is " << wrong << " out of 20. NOOB" << endl;
	}
}

#endif /* LAB1_FUNCTION_H_ */
