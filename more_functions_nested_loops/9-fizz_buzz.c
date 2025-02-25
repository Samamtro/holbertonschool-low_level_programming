#include <stdio.h>

/**
 * main - printf to 100
 *
 * Return: Always success
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz ");
		else if (x % 5 == 0 && x != 100)
			printf("Buzz ");
		else if (x % 5 == 0 && x == 100)
			printf("Buzz");
		else if (x % 3 == 0)
			printf("Fizz ");
		else printf("%d ", x);
	}
	printf("\n");

	return (0);
}
