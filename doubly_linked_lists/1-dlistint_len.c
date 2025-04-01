#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - the number of elements in a linked dlistint_t list
 * @h: Pointer to the head of the doubly linked list.
 *
 *	Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;	/* Initialise le compteur de nœuds à 0 */

	while (h != NULL)	/* Parcourt la liste jusqu'à la fin (h devient NULL) */
	{
		count++;	/* Incrémente le compteur à chaque nœud */
		h = h->next; /* on passe au noeud suivant */
	}
	return (count);	/* Retourne le nombre total de noeud */
}

