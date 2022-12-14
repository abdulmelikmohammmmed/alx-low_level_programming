#include "main.h"

/**
 * print_last_digit - prit the last digit of a number
 * @n: is the 
 * Return: integer values
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
		last = last -1;

	_putchar(last + '0');

	return (last);
}
