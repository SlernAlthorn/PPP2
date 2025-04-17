#include "../../../std_lib_facilities.h"

int main()
{
	int number_of_words = 0;
	string previous = " ";					// Previous word; initialized to "not a word".
	string current;							// Current word.
	while (cin >> current)					// Read a stream of words.
	{
		++number_of_words;
		if (previous == current)			// Check if the word is the same as last.
		{
			cout << "word number " << number_of_words << " repeated: " << current << '\n';
		}
		previous = current;
	}

	keep_window_open();
	return 0;
}