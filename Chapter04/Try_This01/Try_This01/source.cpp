// This program converts from yen, krnoer or pounds into dollars.
#include "../../../std_lib_facilities.h"

int main()
{
	constexpr double yen{ 0.0067 };
	constexpr double kroner{ 0.14 };
	constexpr double pounds{ 1.26 };

	cout << "Please enter an amount followed by a currency:\n";
	double amount{ 0.0 };
	char currency{ ' ' };
	cin >> amount >> currency;

	if (currency == 'y')
	{
		cout << amount << " yens are " << amount * yen << " dollars.\n";
	}
	else if (currency == 'k')
	{
		cout << amount << " kroners are " << amount * kroner << " dollars.\n";
	}
	else if (currency == 'p')
	{
		cout << amount << " pounds are " << amount * pounds << " dollars.\n";
	}
	else
	{
		cout << "Sorry, I don't know a currency called " << currency << ".\n";
	}

	keep_window_open();
	return 0;
}