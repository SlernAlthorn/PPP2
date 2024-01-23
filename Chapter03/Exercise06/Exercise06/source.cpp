// This program outputs 3 integer values in numerical sequence separated by commas.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter three integer values separated by spaces:\n";
	int val1{ 0 };
	int val2{ 0 };
	int val3{ 0 };
	cin >> val1 >> val2 >> val3;

	if (val1 <= val2)
	{
		if (val2 <= val3)
		{
			cout << val1 << ',' << val2 << ',' << val3 << '\n';
			keep_window_open();
			return 0;
		}

	}
	if (val1 <= val3)
	{
		if (val3 <= val2)
		{
			cout << val1 << ',' << val3 << ',' << val2 << '\n';
			keep_window_open();
			return 0;
		}

	}
	if (val2 <= val1)
	{
		if (val1 <= val3)
		{
			cout << val2 << ',' << val1 << ',' << val3 << '\n';
			keep_window_open();
			return 0;
		}

	}
	if (val2 <= val3)
	{
		if (val3 <= val1)
		{
			cout << val2 << ',' << val3 << ',' << val1 << '\n';
			keep_window_open();
			return 0;
		}

	}
	if (val3 <= val1)
	{
		if (val1 < val2)
		{
			cout << val3 << ',' << val1 << ',' << val2 << '\n';
			keep_window_open();
			return 0;
		}

	}
	if (val3 <= val2)
	{
		if (val2 < val1)
		{
			cout << val3 << ',' << val2 << ',' << val1 << '\n';
			keep_window_open();
			return 0;
		}

	}
}