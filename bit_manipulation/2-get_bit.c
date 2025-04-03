#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to search
 * @index: The index of the bit to get
 *
 * Return: The value of the bit at index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*
	 * Vérifie si l'index est hors de portée
	 * Si l'index est supérieur ou égal à la taille de n en bits, retourne -1
	 * sizeof(n) * 8 donne le nombre total de bits dans n
	 * sizeof(n) donne la taille de n en octets, et 8 bits par octet
	 */
	if (index >= sizeof(n) * 8)
		return (-1);

	/*
	 * Décale n de "index" positions vers la droite et applique un masque avec 1
	 * Le bit à la position index est maintenant le bit de poids faible
	 */
	return ((n >> index) & 1);
}
