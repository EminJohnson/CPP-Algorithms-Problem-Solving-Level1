#include <cmath>
#include <iostream>
#include <string>
using namespace std;

struct StInfo
{
	unsigned int LoanAmount;
	unsigned int MonthlyNeed;
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
		cout << "How Many Month You Need to settle the loan : \n";
		GetValidateNumber(Info.MonthlyNeed);

		if (Info.MonthlyNeed < 1 || Info.MonthlyNeed > 12)
		{
			cout << "Enter a real Number [ 1 -> 12 ]  \n";
		}
	} while (Info.MonthlyNeed < 1 || Info.MonthlyNeed > 12);

	return Info;
}

unsigned int CalculateMonthInstallmentAmount(StInfo Info)
{
	return ceil((float)Info.LoanAmount / Info.MonthlyNeed);
}

void PrintMonthInstallmentAmount(StInfo Info)
{
	cout << CalculateMonthInstallmentAmount(Info) << endl;
}

int main()
{
	PrintMonthInstallmentAmount(ReadInfo());

	return 0;
}
