#include "../../../std_lib_facilities.h"

int main()
{
	string previous = " ";					// Previous word; initialized to "not a word".
	string current;							// Current word.
	while (cin >> current)					// Read a stream of words.
	{
		if (previous == current)			// Check if the word is the same as last.
		{
			cout << "repeated word: " << current << '\n';
		}
		previous = current;
	}

	keep_window_open();
	return 0;
}