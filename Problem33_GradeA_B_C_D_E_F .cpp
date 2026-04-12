#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum EnGrade{A, B, C, D, E, F};

void InvalidInput(unsigned short& Number)
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

        if (Number < 0 || Number > 100)
        {
            cout << " enter a other number : \n";
            continue;
        }
        break;
    }
}

unsigned short ReadMark ()
{
    unsigned short Number;
    cout << "Enter your Mark : \n" << endl;
    InvalidInput(Number);
    return Number;

}

EnGrade Grade (unsigned short Mark)
{
    if (Mark >= 90) return EnGrade::A;
    if (Mark >= 80) return EnGrade::B;
    if (Mark >= 70) return EnGrade::C;
    if (Mark >= 60) return EnGrade::D;
    if (Mark >= 50) return EnGrade::E;
    return EnGrade::F;
  
}

void PrintGrade(EnGrade Grade)
{
    switch (Grade)
    {
        case EnGrade::A : cout << " A "; break;
        case EnGrade::B : cout << " B "; break;
        case EnGrade::C : cout << " C "; break;
        case EnGrade::D : cout << " D "; break;
        case EnGrade::E : cout << " E "; break;
        default         : cout << " F "; break;

    }
}

int main()
{
    PrintGrade(Grade (ReadMark ()));
    return 0;
}