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

void PrintNumberFrom01ToN_usingWhileLoop (unsigned short N)
{
    cout << "\n\n";
    int  i = 1;
    while (i <= N)
    {
        cout << i << endl; 
        i++;
    }
}

void PrintNumberFrom01ToN_usingDoWhileLoop (unsigned short N)
{
    cout << "\n\n";
    int  i = 1;
    do
    {
        cout << i << endl; 
        i++;
    }
    while (i <= N);
}

void PrintNumberFrom01ToN_usingForLoop (unsigned short N)
{
    cout << "\n\n";
    for (int i = 1; i <= N; i++)
    {
        cout << i << endl; 
    }
}

int main()
{
   unsigned short N = ReadNumber();
   PrintNumberFrom01ToN_usingWhileLoop (N);
   PrintNumberFrom01ToN_usingDoWhileLoop (N);
   PrintNumberFrom01ToN_usingForLoop (N);
   return 0;
}