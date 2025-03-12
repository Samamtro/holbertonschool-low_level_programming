#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory, Else if return exit status 98
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
