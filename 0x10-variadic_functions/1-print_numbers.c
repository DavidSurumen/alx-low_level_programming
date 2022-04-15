#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to print between the numbers
 * @n: number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, sep = n - 1;
	va_list ap;

	if (n > 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++, sep--)
		{
			if (sep > 0)
				printf("%d%s", va_arg(ap, int), separator);
			else
				printf("%d", va_arg(ap, int));
		}
		printf("\n");

		va_end(ap);
	}
}
