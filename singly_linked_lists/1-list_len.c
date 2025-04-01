#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  list_len - a function that returns the number of elements
 * @h: Pointer to the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h);
{
	size_t count = 0; /* Initialisation du compteur */
	while (h != NULL)	/* Tant qu'on n'a pas atteint la fin de la liste */
	{
		h = h->next;	/* passe au noeud suivant */
		count++;	/* incrementer le compteur */
	}
	return (count);	/* Retourne le nombre total de nœuds parcourus */
}
