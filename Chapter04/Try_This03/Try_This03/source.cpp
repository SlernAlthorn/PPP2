// This program prints the list of alphabetic characters and their digit equivalent.
#include "../../../std_lib_facilities.h"

int main()
{
	char character{ 'a' };

	while (character <= 'z')
	{
		cout << character << '\t' << int{ character } << '\n';
		++character;
	}

	keep_window_open();
	return 0;
	}