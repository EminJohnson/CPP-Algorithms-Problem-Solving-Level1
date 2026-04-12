
#include <iostream>

using namespace std;

enum EnCheck {Odd = 1, Even = 0};

void InvalidInput (int& Number)
{
    while (true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid!!, entre a real number : \n";
            continue;

        if (Number < -1000 || Number > 1000)
        {
            cout << " enter a number entre -1000 and 1000 : \n";
            continue;
        }

        }

        break;
    }
}

int readNUmber ()
{
    int Number;
    cout << "entre your Number : \n";
    InvalidInput (Number);
    return Number;
}

EnCheck IsEven (int Number)
{
    return (Number % 2 == 0)?  EnCheck::Even : EnCheck::Odd;
}

void PrintResult (EnCheck Check)
{   
    cout << ((Check == EnCheck::Even)?  "is Even": "is odd") << endl;
}

int main ()
{
    PrintResult (IsEven(readNUmber()));
}