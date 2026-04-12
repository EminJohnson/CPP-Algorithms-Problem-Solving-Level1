#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum EnMonthName { January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12 };

void GetValidateNumber(unsigned short& Number)
{
	while (true)
	{
		if (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid!!, Enter a Real Number : \n";
			continue;
		}

		if (Number < 1 || Number > 12)
		{
			cout << " Enter a Number Onter 1 To 12 : \n";
			continue;
		}
		break;
	}
}

unsigned short ReadMonthNumber(string Message)
{
	unsigned short Month = 0;
	cout << Message;
	GetValidateNumber(Month);
	return Month;
}

EnMonthName GetMonthName(unsigned short Month)
{
	return (EnMonthName)Month;
}

void PrintMonthName(EnMonthName MonthsName)
{
	switch (MonthsName)
	{
	case EnMonthName::January: cout << "Its January"; break;
	case EnMonthName::February: cout << "Its February"; break;
	case EnMonthName::March: cout << "Its March"; break;
	case EnMonthName::April: cout << "Its April"; break;
	case EnMonthName::May: cout << "Its May"; break;
	case EnMonthName::June: cout << "Its June"; break;
	case EnMonthName::July: cout << "Its July"; break;
	case EnMonthName::August: cout << "Its August"; break;
	case EnMonthName::September: cout << "Its September"; break;
	case EnMonthName::October: cout << "Its October"; break;
	case EnMonthName::November: cout << "Its November"; break;
	default:                     cout << "Its December"; break;
	}
}

int main()
{
	PrintMonthsName(GetMonthName(ReadMonthNumber("Enter Your Month Number : \n")));

	return 0;
}