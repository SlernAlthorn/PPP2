#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter an integer value:\n";
	int val{ 0 };
	cin >> val;

	if (val % 2 == 0)
	{
		cout << "The value " << val << " is an even number.\n";
	}
	if (val % 2 == 1)
	{
		cout << "The value " << val << " is an odd number.\n";
	}

	keep_window_open();
	return 0;
}