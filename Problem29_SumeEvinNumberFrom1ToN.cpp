#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum EnOddOrEven{Odd = 1, Evin = 2};

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

EnOddOrEven CkeckOddOrEven (unsigned short N)
{
    return ((N % 2 == 0)? EnOddOrEven::Evin : EnOddOrEven::Odd);
}

void PrintSumEvinNumberFrom1ToN_usingWhileLoop (unsigned short N)
{
    unsigned short Result = 0;
    cout << "\n\n";
    int  i = 0;
    while (i < N)
    {
        i ++;
        if (CkeckOddOrEven (i) == EnOddOrEven::Evin)
        {
            Result += i;
        }
    }
    cout << Result << endl;
}

void PrintSumEvinNumberFrom1ToN_usingDoWhileLoop (unsigned short N)
{
    unsigned short Result = 0;
    cout << "\n\n";
    int  i = 0;
    do
    {
        i ++;
        if (CkeckOddOrEven (i) == EnOddOrEven::Evin)
        {
            Result += i;
        }
    }
    while (i < N);
    cout << Result << endl;
}

void PrintSumEvinNumberFrom1ToN_usingForLoop(unsigned short N)
{
    unsigned short Result = 0;
    cout << "\n\n";
    for (int i = 1; i <= N; i ++)
    {
        if (CkeckOddOrEven (i) == EnOddOrEven::Evin)
        {
            Result += i;
        }
    }
    cout << Result << endl;
}

int main()
{
   unsigned short N = ReadNumber();
   PrintSumEvinNumberFrom1ToN_usingWhileLoop(N);
   PrintSumEvinNumberFrom1ToN_usingDoWhileLoop(N);
   PrintSumEvinNumberFrom1ToN_usingForLoop(N);
   return 0;
}