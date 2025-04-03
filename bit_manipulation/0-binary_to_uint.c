#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if b is NULL or contains chars not 0 or 1
 * Description: This function iterates through the string b, converting each
 */
unsigned int binary_to_uint(const char *b)
{
	/* Initialisation de la variable pour le résultat de la conversion */
	unsigned int result = 0;
	int i;	/* Compteur pour parcourir la chaîne b */

	if (b == NULL)	/* Vérifie si le pointeur vers la chaîne b est NULL */
		return (0);	/* Retourne 0 si b est NULL */
	/* Parcourt la chaîne b jusqu'à ce que le caractère nul soit atteint */
	for (i = 0; b[i] != '\0'; i++)
	{
		/* Si le caractère n'est ni '0' ni '1', la chaîne est invalide */
		if (b[i] != '0' && b[i] != '1')
			return (0);	/* Retourne 0 si le caractère n'est pas valide */
		/*
		 * Décale le résultat d'un bit vers la gauche et ajoute la valeur
		 * du caractère actuel
		 * 'b[i] - '0' convertit le caractère '0' ou '1' en son équivalent
		 * numérique (0 ou 1)
		 */
		result = (result << 1 | (b[i] - '0'));
	}
	/* Retourne le nombre converti après avoir traité tous les caractères */
	return (result);
}
