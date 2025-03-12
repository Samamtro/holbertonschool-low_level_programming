#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/* Déclaration d'un pointeur pour stocker l'adresse de la mémoire allouée */
	void *ptr;

	/* Allocation de mémoire de `b` octets */
	ptr = malloc(b);

	/* Vérifie si l'allocation a échoué */
	if (ptr == NULL)
		exit(98); /* Quitte le programme avec le code d'erreur 98 */

	/* Retourne le pointeur vers la mémoire allouée */
	return (ptr);
}
