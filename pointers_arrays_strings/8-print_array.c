#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array of integer
 * @n: is the number of elements of the array to be printed
 * Return void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}

