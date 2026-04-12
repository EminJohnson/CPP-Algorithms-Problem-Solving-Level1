#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum EnDaysName { Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

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

		if (Number < 1 || Number > 7)
		{
			cout << " Enter a Number Onter 1 To 7 : \n";
			continue;
		}
		break;
	}
}

unsigned short ReadDAyNumber(string Message)
{
	unsigned short Day = 0;
	cout << Message;
	GetValidateNumber(Day);
	return Day;
}

EnDaysName GetDayName(unsigned short Day)
{
	return (EnDaysName)Day;
}

void PrintDaysName(EnDaysName DaysName)
{
	switch (DaysName)
	{
	case EnDaysName::Sunday: cout << "Its Sunday"; break;
	case EnDaysName::Monday: cout << "Its Monday"; break;
	case EnDaysName::Tuesday: cout << "Its Tuesday"; break;
	case EnDaysName::Wednesday: cout << "Its Wednesday"; break;
	case EnDaysName::Thursday: cout << "Its Thursday"; break;
	case EnDaysName::Friday: cout << "Its Friday"; break;
	default:                    cout << "Its Saturday";  break;
	}
}

int main()
{
	PrintDaysName(GetDayName(ReadDAyNumber("Enter your Day Number : \n")));

	return 0;
}
