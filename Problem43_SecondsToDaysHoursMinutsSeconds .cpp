SecondsToDaysHoursMinutsSeconds#include <cmath>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void GetValidateNumber(unsigned int& Number)
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

		if (Number < 0 || Number > pow(2, 32))
		{
			cout << "Enter a other Number : \n";
			continue;
		}
		break;
	}
}

struct StInfo
{
	unsigned short Seconds;
	unsigned short Minutes;
	unsigned short Hours;
	unsigned short Days;
};

unsigned int ReadSecondDuration()
{
	unsigned int SecondDuration = 0;
	cout << " Enter Number Of Seconds : \n";
	GetValidateNumber(SecondDuration);
	return SecondDuration;
}

StInfo SecondsToDaysHoursMinutsSeconds(unsigned int SecondDuration)
{
	StInfo Info;
	const unsigned int DaysSeconds = 86400;
	const unsigned short HoursSeconds = 3600;
	const unsigned short MinutesSecunds = 60;
	unsigned short Remainder = 0;

	Info.Days = floor(SecondDuration / DaysSeconds);
	Remainder = SecondDuration % DaysSeconds;

	Info.Hours = floor(Remainder / HoursSeconds);
	Remainder %= HoursSeconds;

	Info.Minutes = floor(Remainder / MinutesSecunds);
	Remainder %= MinutesSecunds;

	Info.Seconds = Remainder;

	return Info;
}


void PrintResult(StInfo Info)
{
	cout << "\n***********************************************************\n"
		<< Info.Days << ":"
		<< Info.Hours << ":"
		<< Info.Minutes << ":"
		<< Info.Seconds << ":" << endl
		<< "***********************************************************\n";
}

int main()
{
	PrintResult(SecondsToDaysHoursMinutsSeconds(ReadSecondDuration()));
	return 0;
}