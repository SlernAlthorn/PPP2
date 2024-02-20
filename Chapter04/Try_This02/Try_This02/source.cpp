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

	switch (currency)
	{
	case 'y':
		cout << amount << " yens are " << amount * yen << " dollars.\n";
		break;
	case 'k':
		cout << amount << " kroners are " << amount * kroner << " dollars.\n";
		break;
	case 'p':
		cout << amount << " pounds are " << amount * pounds << " dollars.\n";
		break;
	default:
		cout << "Sorry, I don't know a currency called " << currency << ".\n";
		break;
	}

	keep_window_open();
	return 0;
}