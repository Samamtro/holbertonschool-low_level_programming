#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the string to compare to s2
 * @s2: the string to concate to s1
 * Return: 0; different s1 -s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
