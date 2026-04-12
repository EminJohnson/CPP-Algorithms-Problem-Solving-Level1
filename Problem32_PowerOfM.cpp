#include <cmath>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void InvalidInput(unsigned short& Number)
{
    while (true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid !!, Enter a real Number : \n";
            continue;
        }

        if (Number < 0 || Number > 10)
        {
            cout << " enter a other number : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadNumber ()
{
    unsigned short Number;
    cout << "Enter your Number : \n" << endl;
    InvalidInput(Number);
    return Number;

}

unsigned short ReadPower ()
{
    unsigned short PowerNumber;
    cout << "Enter your PowerNumber : \n" << endl;
    InvalidInput(PowerNumber);
    return PowerNumber;
}

unsigned short PowerOFN (unsigned short Number, unsigned short PowerNumber)
{
    if (PowerNumber == 0)
    {
        return 1;
    }

    unsigned short Result = 1;
    for (int i = 1; i <= PowerNumber; i++)
    {
        Result *= Number;
    }

    return Result;
}



void PrintPowerOfN()
{
    unsigned short Number = ReadNumber ();
    unsigned short Power = ReadPower ();

    cout << PowerOFN (Number, Power) << endl;

}

int main()
{
    PrintPowerOfN();
    return 0;
}