#include "main.h"

/**
 * print_last_digit - print_last_digit.
 * @n: the number that will extract the last number form it
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
