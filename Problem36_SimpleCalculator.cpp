#include <iostream>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

struct stCalculator
{
    float Number1;
    float Number2; 
    char Op;
};

void InvalidInput(float& Number)
{
    while (true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid !!, Enter a real Number : \n";
            continue;
        }

        if (Number < 0 || Number > 5000000)
        {
            cout << " enter a other number : \n";
            continue;
        }
        break;
    }
}

stCalculator ReadNambers ()
{
    stCalculator Calculator;
    cout << "Enter your Number 01 : \n" << endl;
    InvalidInput(Calculator.Number1);

    cout << "Enter your Number 02 : \n" << endl;
    InvalidInput(Calculator.Number2);
    
    do
    {
        cout << "Enter your Operateur +  -  /  * : \n" << endl;
        cin >> Calculator.Op;
    }
    while (Calculator.Op != '+' && Calculator.Op != '-' && Calculator.Op != '/' && Calculator.Op != '*');
    return Calculator;
}


float Calculate(stCalculator Calculator) 
{    
     enOperationType OpType = (enOperationType)Calculator.Op;
    switch (OpType) 
    {
        case enOperationType::Add:      return Calculator.Number1 + Calculator.Number2;
        case enOperationType::Subtract: return Calculator.Number1 - Calculator.Number2;
        case enOperationType::Multiply: return Calculator.Number1 * Calculator.Number2;
        case enOperationType::Divide:   return Calculator.Number1 / Calculator.Number2;
    }
    return 0;
}


void PrintResult (stCalculator Calculator)
{
    cout << "*************************************\n"
         << "Result : " << Calculator.Number1 << " " << Calculator.Op << " " << Calculator.Number2
         << " = " <<  Calculate(Calculator) << endl
         << "*************************************\n";
}

int main ()
{
    PrintResult (ReadNambers ()) ;
}
