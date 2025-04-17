#include "../../../std_lib_facilities.h"

int main()
{
	double d = 0.0;
	while (cin >> d)						// Repeat the statements below as long as we type in numbers.
	{
		int i = d;						// Try to squeeze a double into an int.
		char c = i;						// Try to squeeze an int into a char.
		int i2 = c;						// Get the integer value of the character.
		cout << "d == " << d			// The original double.
			<< " i == " << i			// Converted to int.
			<< " i2 == " << i2			// Int value of char.
			<< " char(" << c << ")\n";
	}

	keep_window_open();
	return 0;
}