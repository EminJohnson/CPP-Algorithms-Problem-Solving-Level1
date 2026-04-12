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

void ReadTriangleData(float& a, float& b)
{
    
    do
    {
        cout << " enter a : \n";
        InvalidInput (a);

        cout << " enter b: \n";
        InvalidInput (b);

        if (a <= b)
        {
            cout << "Invalid Input  !! \n";
        }
    }
    while (a <= b);
}

float CircleAreaITriangle(float a, float b)
{
    const float PI = 3.14;
    float Result = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return Result;
}


void PrintResult (float Result)
{
    cout << "Area =   " << Result << endl;
}

int main()
{
    float a = 0, b = 0;

    ReadTriangleData(a, b);
    PrintResult(CircleAreaITriangle(a, b));
}