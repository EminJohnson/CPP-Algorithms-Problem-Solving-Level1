#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void PrintLettersFromA_To_Z()
{
	for (char i = 'A'; i <= 'Z'; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	PrintLettersFromA_To_Z();
	return 0;
}
