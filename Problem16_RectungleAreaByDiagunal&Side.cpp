#include <cmath>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void InvalidInput (float& Number)
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

void ReadNumbers(float& Side, float& Diagunal)
{
    
    do
    {
        cout << " enter the Side : \n";
        InvalidInput (Side);

        cout << " enter the Diagunal: \n";
        InvalidInput (Diagunal);

        if (Side >= Diagunal)
        {
            cout << "Invalid Input  !! \n";
        }
    }
    while (Side >= Diagunal);
}

float RectangleArea(float Side, float Diagunal)
{
    return Side * sqrt(pow(Diagunal, 2) - pow(Side, 2));
}


void PrintResult (float Side, float Diagunal)
{
    cout << "Area Of   "  << Side << " and " << Diagunal << " = "
         << RectangleArea (Side, Diagunal) << endl;
}

int main()
{
    float Side = 0, Diagunal = 0;
    ReadNumbers(Side, Diagunal);
    PrintResult(Side, Diagunal);
}