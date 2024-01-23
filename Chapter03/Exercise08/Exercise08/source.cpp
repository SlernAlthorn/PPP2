// This program tests an integer value to determine if it is odd or even.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter an integer value: ";
	int value{ 0 };
	cin >> value;

	if (value % 2 == 0)
	{
		cout << "The value " << value << " is an even number.\n";
	}
	if (value % 2 == 1)
	{
		cout << "The value " << value << " is an odd number.\n";
	}

	keep_window_open();
	return 0;
}