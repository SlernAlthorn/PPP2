// This program converts spelled-out numbers into digits.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter a spelled-out number: ";
	string spelled_out{ "" };
	cin >> spelled_out;

	if (spelled_out == "zero")
	{
		cout << "zero is 0\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "one")
	{
		cout << "one is 1\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "two")
	{
		cout << "two is 2\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "three")
	{
		cout << "three is 3\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "four")
	{
		cout << "four is 4\n";
		keep_window_open();
		return 0;
	}
	cout << "Not a number I know.\n";

	keep_window_open();
	return 0;
}