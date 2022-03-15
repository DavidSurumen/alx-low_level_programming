#include "main.h"

/**
 * jack_bauer - print every minute of the day
 * Return: 0
 */
void jack_bauer(void)
{
	int min = 0;
	int hour = 0;
	int i, j, k, l;

	while (hour < 24)
	{
		i = hour / 10; /* doubles digit in hours*/
		j = hour % 10; /* singles digit */

		while (min < 60)
		{
			k = min / 10; /* doubles digit ni minutes */
			l = min % 10; /* singles digit */

			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');

			min++;
		}
		hour++;
	}
}
