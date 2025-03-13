#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimuim rangs of value stored
 * @max: maximal rangs of value stored and
 *
 * Return: pointer to the news arrays
 */
int *array_range(int min, int max)
{
	int *ptr;	/* Pointeur vers le tableau dynamique */
	int i, size;
	/* Vérification des paramètres : min ne doit pas être supérieur à max */
	if (min > max)
		return (NULL);
	/* Calcul de la taille du tableau à allouer */
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);	/* Allocation dynamique du tableau */
	if (ptr == NULL)	/* Vérification de l'échec d'allocation */
		return (NULL);
	/* Remplissage du tableau avec les valeurs de min à max */
	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);	/* Retourne le pointeur vers le tableau alloué */
}
