#include <iostream>
#include "LAB1HomeWork_Controller.h"
#include "LAB2HomeWork_Controller.h"
#include "LAB3HomeWork_Controller.h"
#include "LAB4HomeWork_Controller.h"

using namespace std;

void menu()
{
	cout << "1) Lab 1 - Homework" << endl;
	cout << "2) Lab 2 - Homework" << endl;
	cout << "3) Lab 3 - Homework" << endl;
	cout << "4) Lab 4 - Homework" << endl;
	cout << "5) Lab 5 - Homework" << endl;
	cout << "-99) Exit" << endl;
}

void handleAction(int opt)
{
	switch (opt) {
	case 1:
	{
		runLab1();
		break;
	}
	case 2:
	{
		runLab2();
		break;
	}
	case 3:
	{
		runLab3();
		break;
	}
	case 4:
	{
		runLab4();
		break;
	}
	case 5:
	{
		cout << "\n> See you next week!" << endl;
		break;
	}
	case -99:
		cout << "\nProgram is leaving... Byes!" << endl;
		break;
	default:
		break;
	}


}

int main()
{
	char cont;
	do
	{
		menu();
		int opt;

		cout << "\n> Choose? " << endl;
		cin >> opt;

		handleAction(opt);

		cout << "\n> Do you want to continue? [Y for yes]" << endl;
		cin >> cont;
		cout << endl;
	} while (cont == 'Y' || cont == 'y');


	cout << "\n--------------------------------------------" << endl;
	cout << "> thankyou..." << endl;

	return 0;

}