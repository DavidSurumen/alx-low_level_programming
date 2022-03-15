#include "main.h"

/**
 * times_table - prints the times table up to 9
 * Return: 0
 */
void times_table(void)
{
	int i, j, k, l, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j; /* multiply rows and columns, store in k */

			l = k / 10; /* get the doubles digit of k */
			m = k % 10; /* singles digit */

			if (i == 0)
				_putchar('0');

			else if (j < 10)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + l);
				_putchar('0' + m);
			}
			else
				_putchar('\n');
		}
	}
}
