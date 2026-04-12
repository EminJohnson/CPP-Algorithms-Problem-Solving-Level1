#include <cmath>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void InvalidInput (unsigned short& Number)
{
    while(true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore ();
            cout << " invalid !!, enter a real number : \n";
            continue;
        }

        if (Number <= 0 || Number >= 32000)
        {
            cout << "enter a other Number : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadAge()
{   
    unsigned short Age;
    cout << " enter the Age : \n";
    InvalidInput (Age);

    return Age;
}

bool ValidateNumberInRange(unsigned short Age, unsigned short From, unsigned short To)
{
   return  (Age >= From && Age <= To);
}

unsigned short ReadUntileAgeBetween (unsigned short From, unsigned short To)
{
    unsigned short Age = 0;
    do
    {
        Age = ReadAge();
        cout << "Invalid !!, enter a real Age : \n";
    }
    while (!(ValidateNumberInRange(Age, From, To)));

    return Age;
}


void PrintResult (unsigned short Age)
{
   cout << "your Age is : " << Age << endl;
}

int main()
{
    PrintResult (ReadUntileAgeBetween (18, 45));
}