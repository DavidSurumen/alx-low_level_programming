#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int tem = n % 10;
	if (tem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, tem);

	else if (tem == 0)
		printf("Last digit of %d is %d and is 0\n", n, tem);

	else if (tem < 6 && tem != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, tem);

	return (0);
}
