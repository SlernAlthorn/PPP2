// This program converts "spelled-out" numbers into digits.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter a spelled-out number:\n";
	string spelled_out{ "" };
	cin >> spelled_out;

	if (spelled_out == "zero")
	{
		cout << spelled_out << " is equal to 0.\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "one")
	{
		cout << spelled_out << " is equal to 1.\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "two")
	{
		cout << spelled_out << " is equal to 2.\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "three")
	{
		cout << spelled_out << " is equal to 3.\n";
		keep_window_open();
		return 0;
	}
	if (spelled_out == "four")
	{
		cout << spelled_out << " is equal to 4.\n";
		keep_window_open();
		return 0;
	}
	simple_error("Not a number I know.");
}