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

void ReadTriangleData(float& a, float& b, float& c)
{
    cout << " enter a : \n";
    InvalidInput (a);

    cout << " enter b: \n";
    InvalidInput (b);

    cout << " enter c: \n";
    InvalidInput (c);
}

float CalculateP(float a, float b, float c)
{
    float P = (a + b + c) / 2;
    return P;
}


float CircleAreaITriangle(float a, float b, float c)
{
    const float PI = 3.14;
    float P = CalculateP(a, b, c);

    float Result = PI * pow((a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))) ,2);
    return Result;
}


void PrintResult (float Result)
{
    cout << "Area =   " << Result << endl;
}

int main()
{
    float a = 0, b = 0, c = 0;

    ReadTriangleData(a, b, c);
    PrintResult(CircleAreaITriangle(a, b, c));
}