#include "stdio.h"
/**
 * main - Write a program that prints the number of arguments passed into it
 * @argc: this is the number to argument
 * @argv: This is the The table containing the arguments
 *
 * Return: success always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
