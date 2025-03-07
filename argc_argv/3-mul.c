#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie  two argument
 * @argc: this is the number to argument
 * @argv: This is the The table containing the argumen
 *
 * Return: always error, sucess 1
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

