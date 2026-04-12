#include <cmath>
#include <iostream>
#include <string>
using namespace std;

struct StInfo
{
	unsigned int LoanAmount;
	unsigned int MonthlyPayment;
};

void GetValidateNumber(unsigned int& Number)
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

		if (Number <= 0 || Number > 60000)
		{
			cout << " Enter an Other Number : \n";
			continue;
		}
		break;
	}
}

StInfo ReadInfo()
{
	StInfo Info;
	cout << "Enter Your Loan Amount : \n";
	GetValidateNumber(Info.LoanAmount);

	do
	{
		cout << "Enter Your Monthly Payment : \n";
		GetValidateNumber(Info.MonthlyPayment);

		if (Info.MonthlyPayment > Info.LoanAmount)
		{
			cout << "Enter a real MonthlyPayment  \n";
		}
	} while (Info.MonthlyPayment > Info.LoanAmount);

	return Info;
}

unsigned int CalculateMonthNeedSettle(StInfo Info)
{
	return ceil((float)Info.LoanAmount / Info.MonthlyPayment);
}

void PrintMonthNeedSettle(StInfo Info)
{
	cout << CalculateMonthNeedSettle(Info) << "Months" << endl;
}

int main()
{
	PrintMonthNeedSettle(ReadInfo());

	return 0;
}
