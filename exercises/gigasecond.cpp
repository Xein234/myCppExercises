#include "../Header.h"

unsigned char leap(int y)
{
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
			{
				return 1;
			}
			return 0;
		}
		return 1;
	}
	return 0;
} //returns a 1 if a year is leap, otherwise returns a 0

int gigasecond(int y, char mt,  char d, char h, char mi, char s, int y2, char mt2, char d2, char h2, char mi2, char s2)
{
	int completeYears = y2 - y;
	int leaps = 0;
	if (completeYears > 0)
	{
		completeYears = completeYears - 1;
		for (unsigned char i = 0; i < completeYears; i++)
		{
			leaps = leaps + leap(y + 1 + i);
		}

	}

	unsigned char monthsOfTheYear[12];
	monthsOfTheYear[0] = 31;
	monthsOfTheYear[1] = 28 + leap(y);
	monthsOfTheYear[2] = 31;
	monthsOfTheYear[3] = 30;
	monthsOfTheYear[4] = 31;
	monthsOfTheYear[5] = 30;
	monthsOfTheYear[6] = 31;
	monthsOfTheYear[7] = 31;
	monthsOfTheYear[8] = 30;
	monthsOfTheYear[9] = 31;
	monthsOfTheYear[10] = 30;
	monthsOfTheYear[11] = 31;

	int completeMontsToDays = 0;
	if (mt > 1)
	{
		for (unsigned char i = mt; i < 12; i++)
		{
			completeMontsToDays = completeMontsToDays + monthsOfTheYear[i];
		}
	}

	if (mt2 > 1)
	{
		monthsOfTheYear[1] = 28 + leap(y2);
		for (char i = mt2 - 2; i >= 0; i--)
		{
			completeMontsToDays = completeMontsToDays + monthsOfTheYear[i];
		}
	}
	//investiga cual es el orden de operaciones de el operador terciario(el de abajo por ejemplo)
	/*
	int a = 5;
	a = a + (!completeMontsToDays && mt == mt2 ? +2 : -0) * 2;
	*/

	//limpia el codigo, investiga sobre la optimicasion del compilador

	long long totalSeconds = ((((long long)monthsOfTheYear[mt - 1] + (!completeMontsToDays && mt == mt2 ? -monthsOfTheYear[mt - 1] : -0) - (long long)d - 1 + (long long)d2) * 24 + (24 - (long long)h - 1 + (long long)h2)) * 60 + (60 - (long long)mi - 1 + (long long)mi2)) * 60 + (60 - (long long)s + (long long)s2);

	if (totalSeconds <=1000000000)
	{
		return 1;
	}
	return 0;
}