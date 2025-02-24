#include "main.h"
/**
 * print_numbers -print number
 */
void print_numbers(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
