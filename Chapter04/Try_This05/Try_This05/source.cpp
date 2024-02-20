// This program outputs the first 100 squared numbers by using a function.
#include "../../../std_lib_facilities.h"

int square(int x)
{
	int result{ 0 };
	for (int i{ 0 }; i < x; ++i)
	{
		result += x;
	}
	return result;
}

int main()
{
	for (int i{ 0 }; i < 100; ++i)
	{
		cout << i << '\t' << square(i) << '\n';
	}

	keep_window_open();
	return 0;
}