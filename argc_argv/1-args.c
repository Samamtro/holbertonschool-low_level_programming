#include "stdio.h"
/**
 * main - Write a program that prints the number of arguments passed into it
 * @args: args This is the argument count
 * @argv: argv This is the argument vector
 *
 * Return: success always
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv; 
	return (0);
}
