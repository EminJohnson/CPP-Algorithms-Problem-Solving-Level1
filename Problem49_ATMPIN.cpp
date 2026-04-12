#include <iostream>
#include <string>

using namespace std;

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

		if (Number < 0 || Number > 9999)
		{
			cout << " Enter an Other Number : \n";
			continue;
		}
		break;
	}
}

unsigned short ReadATMPIN()
{
	unsigned short ATMPIN = 0;
	cout << "Enter Your ATM PIN : \n";
	GetValidateNumber(ATMPIN);

	return ATMPIN;
}

void isTrue(unsigned short ATMPIN)
{
	while (ATMPIN != 1234)
	{
		cout << "Wrong PIN : \n"
			<< "Enter Other PIN ";
		GetValidateNumber(ATMPIN);
	}

	cout << "Your Balance is : " + to_string(7500) << endl;

}

void PrintBalace(unsigned short ATMPIN)
{
	isTrue(ATMPIN);
}

int main()
{
	PrintBalace(ReadATMPIN());
	return 0;
}
