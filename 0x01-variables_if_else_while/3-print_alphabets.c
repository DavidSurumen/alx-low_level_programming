#include <stdio.h>
#include <string.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	l = toupper(l);
	while (l <= 'Z')
	{
		putchar(l);
		l++;
	}

	putchar('\n');

	return (0);
}
