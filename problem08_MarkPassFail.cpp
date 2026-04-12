#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void InvalidInput (float& Mark)
{
    while (true)
    {
        if (!(cin >> Mark))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid, enter a real number \n";
            continue;
        }

        if (Mark < 0 || Mark > 20)
        {
            cout << " Invalid Mark, enter your Real Mark \n";
            continue;
        }
        break;
    }
}

float ReadMark ()
{
    float Mark = 0;
    cout << "Enter your mark : \n";
    InvalidInput (Mark);
    return Mark;
}

bool IsPass(float Mark)
{
    return (Mark >= 10);
}

void PrintResult (float Mark)
{
    cout << ((IsPass(Mark))? "Pass " : "Fail ");
}

int main()
{
    PrintResult ( ReadMark ());
}