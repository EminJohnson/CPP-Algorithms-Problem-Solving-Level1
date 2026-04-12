#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::to_string;

void InvalidInput(unsigned short& Number)
{
    while (true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore (1000, '\n');
            cout << " Invalid . Entre a real Number : \n";
            continue;
        }

        if (Number <= 0 || Number >= 32000)
        {

            cout << " Invalid . Entre a real Number : \n";
            continue;
        }
        break;
    }
    
}

unsigned short ReadNumber ()
{
    unsigned short  Number = 0;
    cout << " enter Your Number : \n";
    InvalidInput(Number);

    return Number;
}

float GetHalfNumber (unsigned short  Number)
{
    return (float)Number / 2;
}

void PrintHalfNumber (unsigned short Number)
{
   string Result = "Half Number of : " + to_string(Number) + " is : " + to_string(GetHalfNumber (Number)) ;
    cout << endl << Result << endl;
}

int main ()
{
    PrintHalfNumber (ReadNumber ());
}
