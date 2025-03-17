#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the array of integers to search through
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: the index of the first element for which cmp does not return 0,
 * or -1 if no such element is found or if size is less than or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; size < 0; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
