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

#endif /* LAB1_FUNCTION_H_ */
