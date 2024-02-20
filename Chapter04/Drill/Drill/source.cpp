#include "../../../std_lib_facilities.h"

int main()
{	
	int val1{ 0 };
	int val2{ 0 };
	while (cin >> val1 >> val2)
	{
		cout << "Please enter a pair of integer values:\n";
		cout << val1 << " " << val2 << '\n';
	}
	cout << '\n';

	keep_window_open();
	return 0;
}