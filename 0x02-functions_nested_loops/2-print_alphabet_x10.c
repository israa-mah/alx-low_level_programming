#include "main.h"

/**
 * print_alphabet_x10 - print in lowercase 10 times
 *
 * Return: 0 always
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char alpha;

	while (a <= 9)
	{

		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		 _putchar('\n');
			 a++;
	}
}
