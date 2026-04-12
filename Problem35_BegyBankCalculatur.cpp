#include <iostream>

using namespace std;

enum enCoinType { Penny = 1, Nickel = 5, Dime = 10, Quarter = 25, Dollar = 100 };

void InvalidInput(int& Number)
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

struct stWallet 
{
    int Pennies;
    int Nickels;
    int Dimes;
    int Quarters;
    int Dollars;
};

stWallet ReadPiggyBankData ()
{
    stWallet Wallet;
    cout << "Enter your Total Pennies : \n" << endl;
    InvalidInput(Wallet.Pennies);

    cout << "Enter your Nickels : \n" << endl;
    InvalidInput(Wallet.Nickels);

    cout << "Enter your Total Dimes : \n" << endl;
    InvalidInput(Wallet.Dimes);

    cout << "Enter your Total Quarters : \n" << endl;
    InvalidInput(Wallet.Quarters);

    cout << "Enter your Total Dollars : \n" << endl;
    InvalidInput(Wallet.Dollars);  
    
    return Wallet;
}

int CalculateTotalPennies(stWallet Wallet) 
{
    int Total = 0;
    Total += Wallet.Pennies * enCoinType::Penny;
    Total += Wallet.Nickels * enCoinType::Nickel;
    Total += Wallet.Dimes   * enCoinType::Dime;
    Total += Wallet.Quarters * enCoinType::Quarter;
    Total += Wallet.Dollars  * enCoinType::Dollar;
    return Total;
}

float CalculateTotalDollars(stWallet Wallet)
{
  return CalculateTotalPennies(Wallet) * 0.01; 
}

void PrintResult (stWallet Wallet)
{
    cout << "Total Pennies : " << CalculateTotalPennies(Wallet) << endl;
    cout << "Total Dollars : " << CalculateTotalDollars(Wallet) << endl;

}

int main()
{
    PrintResult (ReadPiggyBankData ());
}