#include "main.h"

/**
 * 2-print_alphabet_x10 - print alphabet 10 times in lowercase, followed by new line
 * use only '_putchar' function
 * _putchar can be used only twice
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\0');
		i++;
	}
}
