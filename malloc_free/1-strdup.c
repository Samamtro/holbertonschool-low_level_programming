#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Creates a duplicate of a given string.
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
		copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[len] = '\0';
	return (copy);
}
