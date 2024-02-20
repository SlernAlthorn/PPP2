// This program bleeps out disliked words.
#include "../../../std_lib_facilities.h"

int main()
{
	vector<string> disliked_words{ "broccolis","epinards" };
	vector<string> word_list{ "" };

	cout << "Please enter a list of words:\n";
	for (string word; cin >> word;)
	{
		word_list.push_back(word);
	}

	bool is_disliked{ false };
	for (string word : word_list)
	{
		for (string disliked : disliked_words)
		{
			if (word == disliked)
			{
				is_disliked = true;
			}
		}
		if (is_disliked)
		{
			cout << "BLEEP ";
			is_disliked = false;
		}
		else
		{
			cout << word << ' ';
		}
	}

	cout << '\n';

	keep_window_open();
	return 0;
}