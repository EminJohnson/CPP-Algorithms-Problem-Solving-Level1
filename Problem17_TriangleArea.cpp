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

void ReadNumbers(float& Rule, float& Height)
{
    
    do
    {
        cout << " enter the Rule : \n";
        InvalidInput (Rule);

        cout << " enter the Height: \n";
        InvalidInput (Height);

        if (Rule <= Height)
        {
            cout << "Invalid Input  !! \n";
        }
    }
    while (Rule <= Height);
}

float CalculateTriangleArea(float Rule, float Height)
{
    return   Rule * Height / 2;
}


void PrintResult (float Rule, float Height)
{
    cout << "Area Of   "  << Rule << " and " << Height << " = "
         << CalculateTriangleArea (Rule, Height) << endl;
}

int main()
{
    float Rule = 0, Height = 0;
    ReadNumbers(Rule, Height);
    PrintResult(Rule, Height);
}