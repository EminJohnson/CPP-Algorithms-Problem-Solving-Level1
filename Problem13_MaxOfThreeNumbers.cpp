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

void ReadNumbers(float& Number01, float& Number02, float& Number03)
{
    
    do
    {
        cout << " enter the First Number : \n";
        InvalidInput (Number01);

        cout << " enter the  Number 02: \n";
        InvalidInput (Number02);

        cout << " enter the Last Number : \n";
        InvalidInput (Number03);

        if (Number01 == Number02 || Number02 == Number03 || Number01 == Number03)
        {
            cout << "Invalid Input  !! \n";
        }
    }
    while (Number01 == Number02 || Number02 == Number03 || Number01 == Number03);
}

float CheckMaxOfThreeNumbers (float Number01, float Number02, float Number03)
{
    if (Number01 > Number02)
    {
        if (Number01 > Number03)
        {
            return Number01;
        }
        else
        {
            return Number03;
        }
    }
    else

    {
            if (Number02 > Number03)
        {
            return Number02;
        }
        else
        {
            return Number03;
        }
    }
}


void PrintMaxOfThreeNumbers (float Number01, float Number02, float Number03)
{
    cout << "Max Of "  << Number01  << " and " << Number02 << " and " << Number03
         << " is : " <<  CheckMaxOfThreeNumbers (Number01, Number02, Number03) << endl;
}

int main()
{
    float Number01 = 0, Number02 = 0, Number03 = 0;
    ReadNumbers(Number01, Number02, Number03);
    PrintMaxOfThreeNumbers (Number01, Number02, Number03);
}