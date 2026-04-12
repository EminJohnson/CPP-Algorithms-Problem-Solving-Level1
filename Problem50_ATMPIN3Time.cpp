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

void isTrue(unsigned short& ATMPIN)
{
	unsigned short Counter = 3;
	do
	{
		Counter--;

		if (ATMPIN == 1234) break;
		cout << "\nWrong PIN, you have " + to_string(Counter) + " more tries\n";
		GetValidateNumber(ATMPIN);

	} while (Counter > 1 && ATMPIN != 1234);



}

void PrintBalace(unsigned short ATMPIN)
{
	isTrue(ATMPIN);
	cout << ((ATMPIN == 1234) ? "Your Balance is : 7500 \n" : "Card Locked!\n");
}

int main()
{
	PrintBalace(ReadATMPIN());
	return 0;
}
