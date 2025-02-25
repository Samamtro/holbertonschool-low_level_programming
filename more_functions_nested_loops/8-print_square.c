#include "main.h"

/**
 * print_square - Prints a square using the # character
 * @size: The size of the square
 *
 * Description: If size is 0 or less, only a new line is printed.
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
