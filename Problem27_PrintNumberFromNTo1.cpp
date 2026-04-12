#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void InvalidInput (unsigned short& Number)
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

unsigned short ReadNumber()
{   
    unsigned short N;
    cout << " enter N : \n";
    InvalidInput (N);

    return N;
}

void PrintNumberFromNTo01_usingWhileLoop (unsigned short N)
{
    cout << "\n\n";
    int  i = N;
    while (i >= 1)
    {
        cout << i << endl; 
        i--;
    }
}

void PrintNumberFromNTo01_usingDoWhileLoop (unsigned short N)
{
    cout << "\n\n";
    int  i = N;
    do
    {
        cout << i << endl; 
        i--;
    }
    while (i >= 1);
}

void PrintNumberFromNTo01_usingForLoop (unsigned short N)
{
    cout << "\n\n";
    for (int i = N; i >= 1; i--)
    {
        cout << i << endl; 
    }
}

int main()
{
   unsigned short N = ReadNumber();
   PrintNumberFromNTo01_usingWhileLoop (N);
   PrintNumberFromNTo01_usingDoWhileLoop (N);
   PrintNumberFromNTo01_usingForLoop (N);
   return 0;
}