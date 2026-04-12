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

StInfo ReadInfo()
{
	StInfo Info;

	do
	{
		cout << " Enter Number Of Days : \n";
		GetValidateNumber(Info.Days);

	} while (Info.Days < 0 || Info.Days > 365);

	do
	{
		cout << " Enter Number Of Hours : \n";
		GetValidateNumber(Info.Hours);

	} while (Info.Hours < 0 || Info.Hours >= 24);

	do
	{
		cout << " Enter Number Of Minutes : \n";
		GetValidateNumber(Info.Minutes);

	} while (Info.Minutes < 0 || Info.Minutes >= 60);

	do
	{
		cout << " Enter Number Of Seconds : \n";
		GetValidateNumber(Info.Seconds);

	} while (Info.Seconds < 0 || Info.Seconds >= 60);

	return Info;
}

unsigned int CalculateTaskDuration(StInfo Info)
{
	const unsigned int DaysSeconds = 86400;
	const unsigned short HoursSeconds = 3600;
	const unsigned short MinutesSecunds = 60;

	return (Info.Days * DaysSeconds) + (Info.Hours * HoursSeconds) + (Info.Minutes * MinutesSecunds) + Info.Seconds;
}

void PrintResult(unsigned int Duration)
{
	cout << "\n***********************************************************\n"
		<< Duration << " Second" << endl
		<< "***********************************************************\n";
}

int main()
{
	PrintResult(CalculateTaskDuration(ReadInfo()));
	return 0;
}