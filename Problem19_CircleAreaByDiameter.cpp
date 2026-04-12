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
    float Diameter;
    cout << " enter the Diameter. : \n";
    InvalidInput (Diameter);

    return Diameter;
}

float CirclaAreaByDiameter(float Diameter)
{
    const float PI = 3.14;
    return   (pow(Diameter, 2) * PI) / 4;
}


void PrintResult (float Result)
{
    cout << "Area =   " << Result << endl;
}

int main()
{
    PrintResult(CirclaAreaByDiameter(ReadNumbers()));
}