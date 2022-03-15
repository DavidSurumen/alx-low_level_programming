#include "main.h"

/**
 * main - Entry
 *
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';
	int j = 0;

	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
