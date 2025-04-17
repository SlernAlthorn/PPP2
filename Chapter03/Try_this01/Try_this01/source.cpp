// Read name and age.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and age\n";
	string first_name = "???";			// String variable ("???" means "don't know the name").
	double age = 0.0;					// floating-point variable (0.0 means "don't know the age").
	cin >> first_name >> age;			// Read a string followed by a floating-point value.
	cout << "Hello, " << first_name << " (age " << age * 12 << ")\n";

	keep_window_open();
	return 0;
}