#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void InvalidInput(long long& Number)
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

long long ReadMark ()
{
    long long TotalSales;
    cout << "Enter your TotalSales : \n" << endl;
    InvalidInput(TotalSales);
    return TotalSales;
}

float GetPersontage (long long TotalSales)
{
    if (TotalSales >= 1000000) return  0.01 ;
    if (TotalSales >= 500000)  return  0.02;
    if (TotalSales >= 100000)  return  0.03;
    if (TotalSales >= 50000)   return  0.05;
    return 0; 
}

float CalculateComessionPersontage (long long TotalSales)
{
    return GetPersontage (TotalSales) * TotalSales;
}

void PrintComessionPersontage (long long TotalSales)
{
    cout << " ************************************* \n"
         << "Total Sales :" << TotalSales << endl
         << "Pesontage :" << GetPersontage (TotalSales) * 100 << "%" << endl
         << "Comession Persontage :" << CalculateComessionPersontage (TotalSales) << endl
         << " ************************************* \n";
}


int main()
{
    PrintComessionPersontage (ReadMark ());
    return 0;
}