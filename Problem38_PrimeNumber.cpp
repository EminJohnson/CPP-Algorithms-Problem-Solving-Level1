#include <cmath>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum EnIsPrime { Prime = 1, NotPrime = 2 };

void GetValidatedNumber(int& Number)
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

int ReadNumber(string Message)
{
	int Number;
	cout << Message;
	GetValidatedNumber(Number);

	return Number;
}

EnIsPrime IsPrime(int Number)
{

	if (Number <= 1) return EnIsPrime::NotPrime;
	if (Number == 2) return EnIsPrime::Prime;

	for (int i = 2; i <= round(Number / 2); i++)
	{
		if (Number % i == 0) return EnIsPrime::NotPrime;
	}

	return EnIsPrime::Prime;
}

void PrintResult(EnIsPrime Result)
{
	switch (Result)
	{
	case EnIsPrime::NotPrime: cout << "NotPrime \n"; break;
	default: cout << "Prime \n";    break;
	}
}

int main()
{
	PrintResult(IsPrime(ReadNumber("Enter a number")));
	return 0;
}
