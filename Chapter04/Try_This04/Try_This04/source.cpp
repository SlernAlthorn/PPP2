// This program prints the list of alphabetic characters and their digit equivalent.
#include "../../../std_lib_facilities.h"

int main()
{
	for (char character{ 'a' }; character <= 'z'; character++)
	{
		cout << character << '\t' << int{ character } << '\n';
	}
	cout << '\n';
	for (char character{ 'A' }; character <= 'Z'; character++)
	{
		cout << character << '\t' << int{ character } << '\n';
	}

	keep_window_open();
	return 0;
}