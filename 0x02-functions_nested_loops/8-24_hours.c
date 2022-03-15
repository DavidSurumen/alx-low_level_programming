#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int min = 0;
	int hour = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			if (hour < 10)
				_putchar('0' + 0);
			_putchar('0' + hour);
			_putchar(':');

			if (min < 10)
				_putchar('0' + 0);
			_putchar('0' + min);
			_putchar('\n');

			min++;
		}
		hour++;
	}
}
