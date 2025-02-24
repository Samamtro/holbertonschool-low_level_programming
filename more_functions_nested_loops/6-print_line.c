#include "main.h"

/**
 * print_line - draws a straight line using the character _
 * @n: number of times _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
