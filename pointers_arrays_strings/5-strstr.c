#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: input
 * @needle: input
 *
 * Return: always 0
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;
	while (needle[len] != '\0')
			len++;
			while (*haystack != '\0')
			{
				if (strncmp(haystack, needle, len) == 0)
					return (haystack);
				haystack++;
			}
			return (NULL);
		}
