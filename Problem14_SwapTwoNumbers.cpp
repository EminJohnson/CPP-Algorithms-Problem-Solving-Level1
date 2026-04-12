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

        if (Number <= -32000 || Number >= 32000)
        {
            cout << "enter a other Number : \n";
            continue;
        }
        break;
    }
}

void ReadNumbers(float& Number01, float& Number02)
{
    
    do
    {
        cout << " enter the First Number : \n";
        InvalidInput (Number01);

        cout << " enter the Last Number : \n";
        InvalidInput (Number02);

        if (Number01 == Number02)
        {
            cout << "Invalid Input  !! \n";
        }
    }
    while (Number01 == Number02);
}

void SwapTwoNumbers (float& Number01, float& Number02)
{
   float Number03 = 0;
   
   Number03 = Number01;
   Number01 = Number02;
   Number02 =Number03;
}


void PrintResult (float Number01, float Number02)
{
    cout << "The New Number 01 is  "  << Number01  << " and The New Number 02 is :" << Number02 << endl;
}

int main()
{
    float Number01 = 0, Number02 = 0;
    ReadNumbers(Number01, Number02);
    SwapTwoNumbers (Number01, Number02);
    PrintResult(Number01, Number02);
}