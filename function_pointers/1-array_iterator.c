#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: the integer to print
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
/* Déclaration et initialisation de l'index */
	unsigned int i = 0;

/*
 * Vérification que les paramètres ne sont pas NULL et que la taille
 * est valide
 */
	if (array != NULL && action != NULL && size > 0)
	{
/*
 * Parcours du tableau et application de la fonction `action` à chaque
 * élément
 */
		while (i < size)
		{
/* Appel de la fonction passée en paramètre sur l'élément actuel */
			action(array[i]);
			i++;
		}
	}
}

