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

float ReadNumbers()
{   
    float R;
    cout << " enter the R : \n";
    InvalidInput (R);

    return R;
}

float CalculateCirclaArea(float R)
{
    const float PI = 3.14;
    return   pow(R, 2) * PI;
}


void PrintResult (float Result)
{
    cout << "Area =   " << Result << endl;
}

int main()
{
    PrintResult(CalculateCirclaArea(ReadNumbers()));
}