#include <iostream>

long long totalSeconds(int years, int months, int days, int hours, int minutes, int seconds)
{
	return (long long)seconds + (long long)minutes * 60 + (long long)hours * 60 * 60 + (long long)days * 24 * 60 * 60 + (long long)months * 30 * 24 * 60 * 60 + (long long)years * 12 * 30 * 24 * 60 * 60;



}

long long diferenceInSeconds(int currentYear, int currentMonth, int currentDay, int currentHour, int currentMinute, int currentSecond, int yearOfBirth, int monthOfBirth, int dayOfBirth, int hourOfBirth, int minuteOfBirth, int secondOfBirth)
{


	return totalSeconds(currentYear, currentMonth, currentDay, currentHour, currentMinute, currentSecond) - totalSeconds(yearOfBirth, monthOfBirth, dayOfBirth, hourOfBirth, minuteOfBirth, secondOfBirth);
}

int gigasecond(int currentYear, int currentMonth, int currentDay, int currentHour, int currentMinute, int currentSecond, int yearOfBirth, int monthOfBirth, int dayOfBirth, int hourOfBirth, int minuteOfBirth, int secondOfBirth)
{
	return diferenceInSeconds(currentYear, currentMonth, currentDay, currentHour, currentMinute, currentSecond, yearOfBirth, monthOfBirth, dayOfBirth, hourOfBirth, minuteOfBirth, secondOfBirth) > 1000000000 ? 1 : 0;
}
