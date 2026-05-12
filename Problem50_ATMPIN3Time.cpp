#include <iostream>
#include <string>
#include <limits>

using namespace std;

int ReadInt(string Message, int From, int To)
{
	int Number = 0;
	cout << Message;

	while (true)
	{
		if (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid !!, Enter a real Number : \n";
			continue;
		}

		if (Number < From || Number > To)
		{
			cout << "Enter a Number From " + to_string(From) + " To " + to_string(To) + " :\n";
			continue;
		}

		return Number;
	}
}

bool IsTrue(int PINCODE)
{
	return (PINCODE == 1234);
}

void PrintResult(int PINCODE)
{
	int Count = 3;

	do
	{
		if (IsTrue(PINCODE))
		{
			cout << 7500 << endl; return;
		}

		Count--;

		if (Count > 0) cout << "Wrong PIN ! ," + to_string(Count) + " Chance";

		PINCODE = ReadInt(" Enter your PIN CODE : \n", 0, 9999);
	} while (Count > 1);

	cout << "Blocked";
}

int main()
{
	int PINCODE = ReadInt("Enter your PIN CODE : \n", 0, 9999);

	PrintResult(PINCODE);

	return 0;
}
