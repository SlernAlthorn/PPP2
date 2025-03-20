#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter three strings:\n";
	string val1{ "" };
	string val2{ "" };
	string val3{ "" };
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
		if (val1 <= val2)
		{
			cout << val3 << ',' << val1 << ',' << val2 << '\n';
			keep_window_open();
			return 0;
		}
	}
	if (val3 <= val2)
	{
		if (val2 <= val1)
		{
			cout << val3 << ',' << val2 << ',' << val1 << '\n';
			keep_window_open();
			return 0;
		}
	}
}