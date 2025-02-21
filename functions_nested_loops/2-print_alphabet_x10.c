#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
		_putchar(a);
	}
		_putchar('\n');
	}
}
