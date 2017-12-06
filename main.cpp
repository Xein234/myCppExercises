#include <iostream>
#include "exercises\gigasecond.h"

int gigasecond(int currentYear, int currentMonth, int currentDay, int currentHour, int currentMinute, int currentSecond, int yearOfBirth, int monthOfBirth, int dayOfBirth, int hourOfBirth, int minuteOfBirth, int secondOfBirth);
//optimice data types size



int main()
{
	std::cout << gigasecond(2000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1) << std::endl;
	

	std::cin.get();
}