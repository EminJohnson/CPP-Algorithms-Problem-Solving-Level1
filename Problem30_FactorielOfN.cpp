#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

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

        if (Number <= 0 || Number >= 15)
        {
            cout << "enter a other Number : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadNumber(string Message)
{   
    unsigned short N;
    cout << Message;
    InvalidInput (N);

    return N;
}


void PrintFactorielOfN_usingWhileLoop (unsigned short N)
{
    unsigned long long Result = 1;
    cout << "\n\n";
    int  i = 0;
    while (i < N)
    {
        i ++;
        Result *= i;
    }
    cout << Result << endl;
}

void PrintFactorielOfN_usingDoWhileLoop (unsigned short N)
{
    unsigned long long Result = 1;
    cout << "\n\n";
    int  i = 0;
    do
    {
        i ++;
        Result *= i;
    }
    while (i < N);
    cout << Result << endl;
}

void PrintFactorielOfN_usingForLoop(unsigned short N)
{
    unsigned long long Result = 1;
    cout << "\n\n";
    for (int i = 1; i <= N; i ++)
    {
        Result *= i;
    }
    cout << Result << endl;
}

int main()
{
   unsigned short N = ReadNumber("Enter N : \n");
   PrintFactorielOfN_usingWhileLoop(N);
   PrintFactorielOfN_usingDoWhileLoop(N);
   PrintFactorielOfN_usingForLoop(N);
   return 0;
}