#include "main.h"
/**
 * swap_int - that swaps the values of two integers
 *
 * @a: paramer 1
 * @b: paramer 2
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
