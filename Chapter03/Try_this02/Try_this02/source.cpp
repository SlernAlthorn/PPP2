// Simple program to exercise operators.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Please enter an integer: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';			// Name for newline ("end of line") in output.

	keep_window_open();
	return 0;
}