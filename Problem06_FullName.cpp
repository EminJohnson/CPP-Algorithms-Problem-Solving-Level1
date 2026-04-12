/* ask a user te enter her/hes First Name and Her/Hes Last Name for print a Full Name */

#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

struct strInfo
{
    string FirstName;
    string LastName;
};

strInfo ReadName()
{
    strInfo Info;
    cout << "enter your Furst Name : \n";
    getline(cin, Info.FirstName);

    cout << "enter your Last Name : \n";
    getline(cin, Info.LastName);

    return Info;
}

string GetFullName(strInfo Info)
{
    string FullName = " ";
    return FullName = Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName)
{
    cout << " your Full Name is : " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadName()));
}
