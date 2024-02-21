#include "../../../std_lib_facilities.h"

double smaller(double val1, double val2);
double larger(double val1, double val2);
bool equality(double val1, double val2);
bool almost_equal(double val1, double val2);

int main()
{
	double val1{ 0 };
	double val2{ 0 };
	cout << "Please enter a pair of floating-point values:\n";
	while (cin >> val1 >> val2)
	{
		cout << val1 << " " << val2 << '\n';
		if (!equality(val1, val2))
		{
			cout << "The smaller value is: " << smaller(val1, val2) << '\n';
			cout << "The larger value is: " << larger(val1, val2) << '\n';
			if (almost_equal(val1, val2))
			{
				cout << "The numbers are almost equal.\n";
			}
		}
		else
		{
			cout << "The numbers are equal.\n";
		}
		cout << "Please enter a pair of floating-point values:\n";
	}
	cout << '\n';

	keep_window_open();
	return 0;
}

bool almost_equal(double val1, double val2)
{
	if (((larger(val1, val2) - smaller(val1, val2)) / smaller(val1, val2) < .01))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool equality(double val1, double val2)
{
	if (val1 == val2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

double smaller(double val1, double val2)
{
	if (val1 < val2)
	{
		return val1;
	}
	if (val1 > val2)
	{
		return val2;
	}
}

double larger(double val1, double val2)
{
	if (val1 < val2)
	{
		return val2;
	}
	if (val1 > val2)
	{
		return val1;
	}
}