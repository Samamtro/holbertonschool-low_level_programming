#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the number to modify
 * @index: The index of the bit to set
 *
 * Return: 1 if it worked, -1 if an error occurred
 * Description: This function sets the bit at the specified index to 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*
	 * Vérifie si l'index est hors de portée
	 * Si l'index est supérieur ou égal à la taille de n en bits, retourne -1
	 * sizeof(n) * 8 donne le nombre total de bits dans n
	 * sizeof(n) donne la taille de n en octets, et 8 bits par octet
	 */
	if (index >= sizeof(*n) * 8)
		return (-1);

	/*
	 * Utilise un masque pour définir le bit à 1
	 * Le masque est créé en décalant 1 vers la gauche de "index" positions
	 * Ensuite, on effectue une opération OR avec n pour mettre à 1 le bit à
	 * l'index
	 */
	*n |= (1 << index);

	return (1);
}
