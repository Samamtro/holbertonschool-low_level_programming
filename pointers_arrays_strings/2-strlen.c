#include "main.h"
#include <string.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: string pointer to passed to this function
 * Return: length of the strlen
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
