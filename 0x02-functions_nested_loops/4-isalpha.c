#include "main.h"
/**
 * _isalpha - check if the letter is in lowercase or Uppercase
 * @c: the checked letter
 * Return: 1 if the letter is lowercase or Uppercase, Otherwise 0.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
