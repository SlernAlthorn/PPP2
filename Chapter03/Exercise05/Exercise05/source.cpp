// This program computes several operations on two floating-point values.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter 2 floating-point values:\n";
	double val1{ 0.0 };
	double val2{ 0.0 };
	cin >> val1 >> val2;

	if (val1 == val2)
	{
		cout << "Both values are equal.\n";
	}
	if (val1 < val2)
	{
		cout << "The smaller value is " << val1 << '\n';
		cout << "The larger value is " << val2 << '\n';
	}
	if (val1 > val2)
	{
		cout << "The smaller value is " << val2 << '\n';
		cout << "The larger value is " << val1 << '\n';
	}
	cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
	cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
	cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
	cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';

	keep_window_open();
	return 0;
}