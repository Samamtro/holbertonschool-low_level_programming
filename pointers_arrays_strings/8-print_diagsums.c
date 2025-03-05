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
		sum1 += a[(i * 1) * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, %d,'\n'", sum1, sum2);
}
