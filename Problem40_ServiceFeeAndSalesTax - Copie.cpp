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

float ReadBillValue(string Message)
{
	float Number;
	cout << Message;
	GetValidatedNumber(Number);

	return Number;
}

float AddServicesFee(float Number)
{
	const float ServicesFee = 0.1;
	return Number + (Number * ServicesFee);
}

float AddSalesTax(float Number)
{
	const float SalesTax = 0.16;
	float NewNumber = AddServicesFee(Number);
	return NewNumber + (NewNumber * SalesTax);
}

void PrintResult(float Number)
{
	cout << "**************************************************************\n";
	cout << "Result = " << AddSalesTax(Number) << endl;
	cout << "**************************************************************\n";

}

int main()
{
	PrintResult(ReadBillValue("Enter your Bill Value : \n"));
}