// This program converts a distance from miles to kilometers.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter a distance in miles:\n";
	double distance{ 0.0 };
	cin >> distance;

	cout << distance << " miles are " << distance * 1.609 << " kilometers.\n";

	keep_window_open();
	return 0;
}