#pragma once

#ifndef LAB3HomeWork_FUNCTION_H_
#define LAB3HomeWork_FUNCTION_H_

#include <iostream>

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

#endif /* LAB1_FUNCTION_H_ */
