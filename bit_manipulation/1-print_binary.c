#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * print_binary - Prints the binary representation of a nomber
 * @n: The number to be printed in binary
 *
 * Return: void
 * Description: This function uses recursion to print the binary
 */
void print_binary(unsigned long int n)
{
/*
 * Si n est plus grand que 1, on appelle récursivement print_binary avec n
 * divisé par 2
 */
	if (n > 1)
	/* Décalage binaire à droite de n (équivalent à diviser n par 2) */
		print_binary(n >> 1);

	/* Affiche le bit de poids faible (le bit le moins significatif) de n */
	/*
	 * Applique un masque pour obtenir le bit le plus à droite de n,
	 * et le convertit en caractère ('0' ou '1')
	 */
	_putchar((n & 1) + '0');
}
