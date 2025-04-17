// This program computes a total amount of money given the number of different coins.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "How many pennies do you have?\n";
	int pennies{ 0 };
	cin >> pennies;
	cout << "How many nickels do you have?\n";
	int nickels{ 0 };
	cin >> nickels;
	cout << "How many dimes do you have?\n";
	int dimes{ 0 };
	cin >> dimes;
	cout << "How many quarters do you have?\n";
	int quarters{ 0 };
	cin >> quarters;
	cout << "How many half-dollars do you have?\n";
	int half_dollars{ 0 };
	cin >> half_dollars;
	cout << "How many dollars do you have?\n";
	int dollars{ 0 };
	cin >> dollars;

	cout << '\n';

	if (pennies == 1)
	{
		cout << "You have 1 penny.\n";
	}
	if (pennies > 1)
	{
		cout << "You have " << pennies << " pennies.\n";
	}
	if (nickels == 1)
	{
		cout << "You have 1 nickel.\n";
	}
	if (nickels > 1)
	{
		cout << "You have " << nickels << " nickels.\n";
	}
	if (dimes == 1)
	{
		cout << "You have 1 dime.\n";
	}
	if (dimes > 1)
	{
		cout << "You have " << dimes << " dimes.\n";
	}
	if (quarters == 1)
	{
		cout << "You have 1 quarter.\n";
	}
	if (quarters > 1)
	{
		cout << "You have " << quarters << " quarters.\n";
	}
	if (half_dollars == 1)
	{
		cout << "You have 1 half-dollar.\n";
	}
	if (half_dollars > 1)
	{
		cout << "You have " << half_dollars << " half-dollars.\n";
	}
	if (dollars == 1)
	{
		cout << "You have 1 dollar.\n";
	}
	if (dollars > 1)
	{
		cout << "You have " << dollars << " dollars.\n";
	}
	cout << "The value of all of your coins is $"
		<< (pennies / 100.0) + (nickels / 20.0) + (dimes / 10.0) + (quarters / 4.0) + (half_dollars / 2.0) + dollars
		<< ".\n\n";

	keep_window_open();
	return 0;
}