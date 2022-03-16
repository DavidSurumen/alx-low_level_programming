#include <stdio.h>
#include "main.h"

/**
 * print_times_table -prints the n times table starting with 0
 * @n: integer parameter
 * Description: if n is greater than 15 or less 0, do not print
 * Return: void
 */
void print_times_table(int n)
{
	int i, p;

	for (n = 0; n <= 15; n++)
	{
		for (p = 0; p <= 15; p++)
		{
			i = n * p;
			printf("%d, ", i);
		}
	}
}
