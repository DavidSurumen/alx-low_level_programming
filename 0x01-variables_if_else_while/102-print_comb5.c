#include <stdio.h>

/**
 * main -Entry point
 *
 * Description:
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combination of numbers should be printed in ascending order
 * 00 01 and 10 00 are considered as the same combination
 * You can only use the 'putchar' function to print to the console
 * You can only use 'putchar' eight times maximum in your code
 * You are not allowed to use any variable of type 'char'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int num, num2;
	int a, b, c, d;

	for (num = 0; num < 100; num++)
	{
		a = num % 10; /* singles first_digit */
		b = num / 10; /* doubles first_digit */

		for (num2 = 0; num2 < 100; num2++)
		{
			c = num2 % 10; /* singles second_digit */
			d = num2 / 10; /* doubles second_digit */

			if (b < d || (b == d && a < c))
			{
				putchar(b + '0');
				putchar(a + '0');
				putchar(32);
				putchar(d + '0');
				putchar(c + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44); /* put a comma */
					putchar(32); /* put a SPACE */
				}
			}
		}
	}
	putchar(10);

	return (0);
}
