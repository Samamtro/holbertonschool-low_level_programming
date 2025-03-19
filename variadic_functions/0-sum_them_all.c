#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: this is number bof the arguments
 *
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

		return (sum);
}
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Somme : %d\n", sum_them_all(3, 1, 2, 3));
	printf("Somme : %d\n", sum_them_all(5, 10, 20, 30, 40, 50));
	printf("Somme : %d\n", sum_them_all(0));
	return (0);
}
