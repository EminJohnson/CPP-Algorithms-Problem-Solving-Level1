#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void GetValidateNumber(unsigned short& Number)
{
	while (true)
	{
		if (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << " Invalid !!, Enter a real Number : \n";
			continue;
		}

		if (Number < 0 || Number >= 20000)
		{
			cout << " Enter Other Number : \n";
			continue;
		}
		break;
	}
}

unsigned short ReadNumberOfHours(string Message)
{
	unsigned short Hours = 0;
	cout << Message;
	GetValidateNumber(Hours);

	return Hours;
}

float CalculateNumberOfDays(unsigned short Hours)
{
	const unsigned short DaysHour = 24;
	return (float)Hours / DaysHour;
}

float CalculateNumberOfWeek(unsigned short Hours)
{
	const unsigned short WeekDays = 7;
	return CalculateNumberOfDays(Hours) / WeekDays;
}

void PrintResult(float NumberOfWeek, float NumberOfDays)
{
	cout << "\n***********************************************************\n"
		<< NumberOfWeek << " Weeks" << endl
		<< NumberOfDays << " Days" << endl
		<< "***********************************************************\n";
}

int main()
{
	unsigned short Hours = ReadNumberOfHours(" Enter a Number Of Hours : \n");
	float NumberOfWeek = CalculateNumberOfWeek(Hours);
	float NumberOfDays = CalculateNumberOfDays(Hours);
	PrintResult(NumberOfWeek, NumberOfDays);

	return 0;
}