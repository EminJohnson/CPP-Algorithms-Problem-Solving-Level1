#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

void InvalidInput (float& Number)
{
    while (true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << " Invalid, enter a real Number : \n";
            continue;
        }

        if (Number <= -33000 || Number >= 33000)
        {
            cout << " enter other Number : \n";
            continue;
        }
        break;
    }
}

void ReadNumber(float& Number01, float& Number02, float& Number03)
{
    

    cout << " enter your First Number : \n";
    InvalidInput (Number01);

    cout << " enter your Number 02 : \n";
    InvalidInput (Number02);

    cout << " enter your Last Number : \n";
    InvalidInput (Number03);

}

float CalculateSumOf03Number(float Number01, float Number02, float Number03)
{
    return Number01 + Number02 + Number03;
}

void PrintResultNumber (float Number01, float Number02, float Number03)
{
    cout << "Result of : " << Number01 << " + " << Number02 << " + " << Number03 << " = " 
         << CalculateSumOf03Number(Number01, Number02, Number03) << endl;
}

int main()
{
    float Number01 = 0, Number02 = 0, Number03 = 0;
    ReadNumber(Number01, Number02, Number03);
    PrintResultNumber (Number01, Number02, Number03);
}