#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: this is unsigned int type
 * @size: this is unsigned int typs
 *
 * Return: return to pointer array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;	/* Pointeur pour stocker l'adresse de la mémoire allouée */
	unsigned int count;
	/* Vérifie si l'un des paramètres est nul, dans ce cas on retourne NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/* Allocation de la mémoire pour nmemb éléments de taille "size" */
	ptr = malloc(nmemb * size);
		if (ptr == NULL)	/* Vérifie si malloc a échoué */
		{
			return (NULL);
		}
		count = 0;	/* Initialise la mémoire allouée à 0 */
		while (count < nmemb * size)
		{
			ptr[count] = 0;
			count++;
		}
		return (ptr);	/* Retourne le pointeur vers la mémoire allouée */
	}
