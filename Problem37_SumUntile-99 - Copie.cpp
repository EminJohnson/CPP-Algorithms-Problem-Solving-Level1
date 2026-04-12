#include <iostream>
#include <string>

using namespace std;

void InvalidInput(float& Number)
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

		if (Number <= -10000 || Number >= 10000)
		{
			cout << "Enter a Number [-10000 -> 10000] \n"
				<< "Your Number : ";
			continue;
		}
		break;
	}
}

float ReadNumber(string Message)
{
	float Number;
	cout << Message;
	InvalidInput(Number);

	return Number;
}

float SumNumbers()
{
	int  i = 0;
	float Sum = 0;
	float Number = 0;

	while (Number != -99)
	{
		i++;
		Sum += Number;
		Number = ReadNumber("Enter your number " + to_string(i) + " (-99 to stop) : ");
	}

	return Sum;
}

void PrintResult(float Sum)
{
	cout << "*************************************************\n"
		<< "Your Result is : " << Sum << endl
		<< "*************************************************\n";
}

int main()
{
	PrintResult(SumNumbers());

	return 0;
}