// P10-1
// Wesley Casselman
// All Souls' Day of 2023
// 
// Copied from P8-2

#include <iostream>
#include <string>

using namespace std;

int count_words(string str);

int main()
{
	while (true)
	{
		string str;
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);

		if (str == "Q")
		{
			break;
		}

		cout << "Word count: " << count_words(str) << endl;
	}

	return 0;
}

int count_words(string str)
{
	int words = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (i == 0)
		{
			if (str[0] != ' ')
			{
				words++;
			}
		}
		else if (i == (str.length() - 1))
		{

		}
		else
		{
			if (str[i] == ' ' && str[i + 1] != ' ')
			{
				words++;
			}
		}
	}

	return words;
}