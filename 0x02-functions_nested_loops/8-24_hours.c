#include "holberton.h"

/**
 * jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = minute = 0;
	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar(hour / 10);
			_putchar(hour % 10);
			_putchar(':');
			_putchar(minute / 10);
			_putchar(minute % 10);
			++minute;
		}
		++hour;
	}
}
