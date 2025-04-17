// This program computes sevreal operations on two floating-poing numbers.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter an operation followed by two floating-point values:\n";
	string operation{ "" };
	double val1{ 0.0 };
	double val2{ 0.0 };
	cin >> operation >> val1 >> val2;

	if (operation == "+")
	{
		cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
	}
	if (operation == "plus")
	{
		cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
	}
	if (operation == "-")
	{
		cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
	}
	if (operation == "minus")
	{
		cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
	}
	if (operation == "*")
	{
		cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
	}
	if (operation == "mul")
	{
		cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
	}
	if (operation == "/")
	{
		cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
	}
	if (operation == "div")
	{
		cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
	}

	keep_window_open();
	return 0;
}