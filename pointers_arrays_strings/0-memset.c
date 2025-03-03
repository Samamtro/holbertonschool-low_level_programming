#include "main.h"
/**
 * _memset - the function that fills memory with a constant byte.
 * @s: startig the address of memory to print
 * @b: the desired to value
 * @n: the number to byte of change
 *
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
