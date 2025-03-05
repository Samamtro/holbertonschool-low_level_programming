#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * @a: this is pointer to table
 * @size: number and colonne
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i * size) + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
