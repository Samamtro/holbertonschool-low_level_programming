#include <stdio.h>
#include "main.h"
#include <unistd.h>

/**
 * flip_bits - counts the number of bits needed to flip to get from one number
 * to another
 * @n: flirst number
 * @m: second number
 *
 * Return: number of bites to flip
 * Description: This function uses XOR to find the bits that are different
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*
	 * Utilise l'opération XOR pour trouver les bits différents entre n et m
	 * XOR retourne 1 si les bits sont différents, 0 s'ils sont identiques
	 */
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;
	/*
	 * Compte le nombre de bits à inverser
	 * Tant que xor_result est supérieur à 0, on continue à compter les bits
	 */

	while (xor_result > 0)
	{
		/*
		 * Utilise un masque pour vérifier le bit de poids faible
		 * XOR avec 1 pour obtenir le bit le plus à droite
		 */
		/* Incrémente le compteur si le bit de poids faible est 1 */
		/* On utilise le masque 1 pour vérifier si le bit de poids faible est 1 */
		count += xor_result & 1;

		xor_result >>= 1;
	}
	/* Retourne le nombre de bits à inverser pour transformer n en m */
	return (count);
}
