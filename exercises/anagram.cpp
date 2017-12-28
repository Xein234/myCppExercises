#include <iostream>
#include <string>
int sumOfChars(std::string word)
{
	int sumOfChars = 0;
	for (char i = 0; i < word.size(); i++)
	{
		sumOfChars = sumOfChars + word[i];
	}
	return sumOfChars;
}


void anagram(std::string word, std::initializer_list<std::string> list)
{
	for (auto candidate : list)
	{
		if (candidate.size() == word.size())
		{
			if (sumOfChars(word) == sumOfChars(candidate))
			{
				std::cout << "there is an anagram!\n*returns a list with others anagrams*";
			}


		}
	}
}