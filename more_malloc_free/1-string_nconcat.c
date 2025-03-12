#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the string to append to
 * @s2: the string to concatenate from
 *
 * Return: the number of bytes from s1 to concatenate to s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empt;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*nstr);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}

