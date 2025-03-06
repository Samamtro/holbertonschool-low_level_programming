#include "stdio.h"
/**
 * main - Write a program that prints the number of arguments passed into it
 * @args: This is the argument count (includes the program name)
 * @argv: This is the argument vector (array of strings)
 *
 * Return: success always 0
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
