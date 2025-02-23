#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 *
 * @n: The number to extract the last digit from
 *
 * Return: the last digit of 'n'
 */

int print_last_digit(int n)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}

	_putchar(digit + '0');

	return (digit);
}
