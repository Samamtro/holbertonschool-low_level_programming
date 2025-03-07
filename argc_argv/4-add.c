#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, num;
	char *endptr;

	for (i = 1; i < argc; i++)
	{
		num = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
