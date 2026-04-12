/* Write a program to ask the user to enter his/her
1- Age
2- Driver Licence
then print "Hired", if her/his Age grader thean 21 and has a driver Licence .
otherwise print "Rejectet". 
*/

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct strInfo
{
    unsigned short Age;
    bool HasDriverLicence;
};

void InvalidInput (unsigned short& Number)
{
    while (true)
    {
        if (!(cin >> Number))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid !!, Enter a real number : \n";
            continue;
        }
        break;
    } 
}

strInfo ReadInfo ()
{
    strInfo Info;
    unsigned short DriverLicenceChoice = 0;

    cout << "Enter Your Age : \n";

    do
    {
        InvalidInput (Info.Age);
        if (Info.Age < 1 || Info.Age > 85)
        {
            cout << " Enter a real Age : \n";
        }
    } while (Info.Age < 1 || Info.Age > 85);

    cout << "You Have a Driver Licence input 1 for Yes, 2 for No: \n";

    do
    {
        InvalidInput (DriverLicenceChoice);
        if (DriverLicenceChoice  != 1 && DriverLicenceChoice  != 2)
        {
            cout << " Invalid !!, entre 1 for Yes 2 for No : \n";
        }
    } while (DriverLicenceChoice  != 1 && DriverLicenceChoice  != 2);

    Info.HasDriverLicence = (DriverLicenceChoice  == 1);

    return Info;
    
}

bool IsAccipted (strInfo Info)
{
    return (Info.Age >= 21 && Info.HasDriverLicence);
}

string PrintResult (strInfo Info)
{
    return (IsAccipted(Info) ? "Hired" : "Rejected");
}

int main()
{
    cout << PrintResult (ReadInfo ())<< endl;
}