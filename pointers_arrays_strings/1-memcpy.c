#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: is the pointer
 * @src: is the pointer
 * @n: octets de la zone mémoire pointée
 *
 * Return: a pointer to 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}

