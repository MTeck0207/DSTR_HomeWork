#pragma once
#ifndef LAB1HomeWork_FUNCTION_H_
#define LAB1HomeWork_FUNCTION_H_

#include <iostream>

using namespace std;

int  getNumberOfDays(string month, int year)
{
	if (month == "February")
	{
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
		{
			return 29;
		}
		else
		{
			return 28;
		}

	}
	else if (month == "January" || month == "March" || month == "May" || month == "July" || month == "August" || month == "Octorber" || month == "December")
	{
		return 31;
	}
	else
	{
		return 30;
	}
}

#endif /* LAB1_FUNCTION_H_ */