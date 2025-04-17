// This program produces a simple form letter based on user input.
#include "../../../std_lib_facilities.h"

int main()
{
	cout << "Enter the name of a person you want to write to (followed by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Enter the name of another friend:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Is " << friend_name << " a male('m') or a female('f')?\n";
	char friend_sex{ ' ' };
	cin >> friend_sex;
	cout << "How old is " << first_name << "?\n";
	int age{ 0 };
	cin >> age;
	if (age <= 0)
	{
		simple_error("You're kidding!");
	}
	if (age >= 110)
	{
		simple_error("You're kidding!");
	}

	cout << "\n\tDear " << first_name << ",\n";
	cout << "How are you? I am fine. I miss you.\n";
	cout << "Have you seen " << friend_name << " lately?\n";
	if (friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	if (friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	}
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	if (age == 17)
	{
		cout << "Next year you will be able to vote.\n";
	}
	if (age > 70)
	{
		cout << "I hope you are enjoying retirement.\n";
	}
	cout << "\n\tYours sincerely,\n\n\t\tMathias\n";
	cout << '\n';

	keep_window_open();
	return 0;
}