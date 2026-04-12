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

void ReadNumbers(float& Width, float& Length)
{
    
    do
    {
        cout << " enter the width : \n";
        InvalidInput (Width);

        cout << " enter the Length: \n";
        InvalidInput (Length);

        if (Width >= Length)
        {
            cout << "Invalid Input  !! \n";
        }
    }
    while (Width >= Length);
}

float RectangleArea(float Width, float Length)
{
    return Width * Length;
}


void PrintResult (float Width, float Length)
{
    cout << "Area Of   "  << Width << " * " << Length << " = "
         << RectangleArea (Width, Length) << endl;
}

int main()
{
    float Width= 0, Length = 0;
    ReadNumbers(Width, Length);
    PrintResult(Width, Length);
}