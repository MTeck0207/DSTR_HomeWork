#pragma once

#ifndef LAB2HomeWork_CONTROLLER_H_
#define LAB2HomeWork_CONTROLLER_H_

#include "LAB2HomeWork_Function.h"
#include <iostream>

using namespace std;

void runLab2()
{
	cout << endl;
	cout << "--- Welcome to Lab 2 HomeWork ---" << endl;

	int opt;
	cout << "1)  Q1" << endl;
	cout << "2)  Q2" << endl;

	cout << "> Choose: " << endl;
	cin >> opt;

	switch (opt) {
	case 1:
	{
		int randomNumber[10];

		//Avoid every time same random number when running
		//srand((unsigned)time(NULL));
		srand(time(0));

		// Generate Array
		cout << "Array Number Before Checking:	";
		for (int i = 0; i < 10; i++)
		{
			randomNumber[i] = { 10 + (rand() % 91) };
			cout << randomNumber[i] << "  ";
		}

		cout << endl;
		cout << "Array Number After Checking:	";

		//Check Array
		for (int a = 0; a < 10; a++)
		{
			for (int b = 0; b < 10; b++) {
				if (a == b) {
				}
				else
				{
					if (randomNumber[a] == randomNumber[b])
					{
						randomNumber[a] = { 10 + (rand() % 91) };
					}
				}
			}
			cout << randomNumber[a] << "  ";
		}

		break;

	}
	case 2:
	{
        int* Array;
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        cout << "Enter how many numbers you want to do analysis:	" << endl;
        int Size;
        cin >> Size;

        Array = new int[Size];

        cout << "\n The random number (between 1 - 50) as below:	" << endl;

        srand((unsigned)time(NULL));

        for (int i = 0; i < Size; i++)
        {
            Array[i] = { 1 + (rand() % 50) };

            cout << Array[i] << "\t";

            if ((i + 1) % 10 == 0) {
                cout << endl;
            }

            if (Array[i] <= 10)
            {
                a = a + 1;
            }
            else if (Array[i] >= 11 && Array[i] <= 20)
            {
                b = b + 1;
            }
            else if (Array[i] >= 21 && Array[i] <= 30)
            {
                c = c + 1;
            }
            else if (Array[i] >= 31 && Array[i] <= 40)
            {
                d = d + 1;
            }
            else if (Array[i] >= 41 && Array[i] <= 50)
            {
                e = e + 1;
            }
        }

        cout << "\n The analysis star design as below:	" << endl;

        for (int i = 0; i < 100; i++) {
            cout << "*";
        }
        cout << endl;

        cout << " 1 - 10 |  ";
        for (int i = 1; i <= a; i++)
        {
            cout << "*  ";
        }
        cout << endl;

        cout << "11 - 20 |  ";
        for (int i = 1; i <= b; i++)
        {
            cout << "*  ";
        }
        cout << endl;

        cout << "21 - 30 |  ";
        for (int i = 1; i <= c; i++)
        {
            cout << "*  ";
        }
        cout << endl;

        cout << "31 - 40 |  ";
        for (int i = 1; i <= d; i++)
        {
            cout << "*  ";
        }
        cout << endl;

        cout << "41 - 50 |  ";
        for (int i = 1; i <= e; i++)
        {
            cout << "*  ";
        }
        cout << endl;

        cout << "\n To verfiy the graph is correct:	(display number of 41 - 50)" << endl;

        for (int i = 0; i < 100; i++) {
            cout << "*";
        }
        cout << endl;

        int x = -1;
        for (int i = 0; i < Size; i++)
        {
            if (Array[i] >= 41 && Array[i] <= 50)
            {
                cout << Array[i] << "\t";
                x = x + 1;

                if ((x + 1) % 10 == 0) {
                    cout << endl;
                }
            }
        }
		break;
	}

	default:
		break;
	}
}
#endif /* LAB2_CONTROLLER_H_ */