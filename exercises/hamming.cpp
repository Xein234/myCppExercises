#include <string>
#include <iostream>

int hamming(std::string ADN_a, std::string ADN_b)
{
	if (ADN_a.size() == ADN_b.size())
	{
		int Diffchars = 0;
		for (unsigned int i = 0; i < ADN_a.length(); i++)
		{
			if (ADN_a[i] != ADN_b[i]) 
			{
				Diffchars++;
			}
		}
		return Diffchars;
	}
	else
	{
		throw std::overflow_error("ADN must have the same length");
	}
		

}

