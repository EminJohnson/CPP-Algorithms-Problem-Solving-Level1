#include <iostream>
#include <string>

using namespace std;

string ReadName ()
{
    string Name;
    cout << "enter your Name : \n";
    getline(cin, Name);
    return Name;
}

void PrintName (string Name)
{
    cout << "My Name is : " << Name << endl;
}

int main()
{
    PrintName ( ReadName ());
}