#include <stdio.h>
#include <main.h>
/**
 * main - check the code
 *
 * Return: always 0 (success)
 */

void print_alphabet(char alph)
{
	for (alph = 'a' ; alph <= 'z' ; alph ++)
		return(alph);
}
int main()
{
	char alpha;
	print_alphabet(alpha);
	putchar(alpha);
	putchar("\n");
	return (0);
}
