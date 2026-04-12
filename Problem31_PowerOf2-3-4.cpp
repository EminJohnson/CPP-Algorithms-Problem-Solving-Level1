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

        if (Number <= 0 || Number >= 100)
        {
            cout << " enter a other number : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadNumber (string message)
{
    unsigned short Number = 0;
    cout << message << endl;
    InvalidInput(Number);
    return Number;
}

float PowerOF02 (unsigned short Number)
{
    return pow(Number, 2);
}

float PowerOF03 (unsigned short Number)
{
    return pow(Number, 3);
}

float PowerOF04 (unsigned short Number)
{
    return pow(Number, 4);
}

void PrintPowerOf_2_3_4(unsigned short Number)
{
    cout << "Power of 2 : " << PowerOF02 (Number) << endl;
    cout << "Power of 3 : " << PowerOF03 (Number) << endl;
    cout << "Power of 4 : " << PowerOF04 (Number) << endl;
}

int main()
{
    PrintPowerOf_2_3_4(ReadNumber ("Enter your number [1 -> 100]"));
}
