#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void GetValidatedNumber(float& Number)
{
	while (true)
	{
		if (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Invalid !! , Print a real Number : \n"
				<< " Your Number : ";
			continue;
		}

		if (Number <= 0 || Number >= 10000)
		{
			cout << "Enter a Number [0 -> 10000] \n"
				<< "Your Number : ";
			continue;
		}
		break;
	}
}

float ReadTotalBill(string Message)
{
	float Number;
	cout << Message;
	GetValidatedNumber(Number);

	return Number;
}

float ReadCashPaid(string Message)
{
	float Number;
	cout << Message;
	GetValidatedNumber(Number);

	return Number;
}

void Comparison(float TotalBill, float& CashPaid)
{
	while (true)
	{
		if (CashPaid < TotalBill)
		{
			cout << "Paid Failed! The amount is less than Total Bill.\n";
			CashPaid = ReadCashPaid("Enter other Cash Paid : \n");
			continue;
		}
		break;
	}
}

float CalculateReminder(float TotalBill, float CashPaid)
{
	return CashPaid - TotalBill;
}

void PrintResult(float TotalBill, float CashPaid)
{
	cout << "**************************************************************\n";
	cout << "Result = " << CalculateReminder(TotalBill, CashPaid) << endl;
	cout << "**************************************************************\n";

}

int main()
{
	float TotalBill = ReadTotalBill("Enter Your total Bill : \n");
	float CashPaid = ReadCashPaid("Enter Your Cash Paid : \n");

	Comparison(TotalBill, CashPaid);

	cout << "\nTotal Bill = " << TotalBill << endl;
	cout << "Cash Paid = " << CashPaid << endl << endl;

	PrintResult(TotalBill, CashPaid);

	return 0;
}