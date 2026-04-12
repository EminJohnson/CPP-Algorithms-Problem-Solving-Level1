#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

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

        if (Number < 0|| Number > 20)
        {
            cout << " enter a real Number : \n";
            continue;
        }
        break;
    }
}

void ReadNumber(float& Mark01, float& Mark02, float& Mark03)
{
    

    cout << " enter your First Mark : \n";
    InvalidInput (Mark01);

    cout << " enter your Mark 02 : \n";
    InvalidInput (Mark02);

    cout << " enter your Last Mark : \n";
    InvalidInput (Mark03);

}

float CalculateSumOf03Marks(float Mark01, float Mark02, float Mark03)
{
    return Mark01 + Mark02 + Mark03;
}

float CalculateAverageOf03Marks(float Mark01, float Mark02, float Mark03)
{
    return CalculateSumOf03Marks(Mark01, Mark02, Mark03) / 3;
}

bool IsPass (float Mark01, float Mark02, float Mark03)
{
    return (CalculateAverageOf03Marks(Mark01, Mark02, Mark03) >= 10);
}

void PrintResultNumber (float Mark01, float Mark02, float Mark03)
{
    cout << "Result of : " << Mark01 << " + " << Mark02 << " + " << Mark03  << " = " 
         << CalculateAverageOf03Marks(Mark01, Mark02, Mark03) << endl;

    cout <<"\n \n" << ((IsPass (Mark01, Mark02, Mark03))? "Pass" : "Fail") << endl;;

}

int main()
{
    float Mark01 = 0, Mark02 = 0, Mark03 = 0;
    ReadNumber(Mark01, Mark02, Mark03);
    PrintResultNumber (Mark01, Mark02, Mark03);
}