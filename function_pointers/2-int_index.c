#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the array of integers to search through
 * @size: is the number of elements in the array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: 0 if false, something else otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

/* Vérifie que la taille est valide*/
	if (size > 0)
	{
	/* Vérifie que le tableau et la fonction de comparaison ne sont pas NULL */
		if (array != NULL && cmp != NULL)
		{
		/* Parcours du tableau */
			while (i < size)
			{
		/* Si la fonction cmp retourne vrai, retourne l'index correspondant */
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
/* Retourne -1 si aucun élément ne correspond ou si les entrées sont invalides*/
	return (-1);
}
