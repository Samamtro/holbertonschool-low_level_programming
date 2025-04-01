#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_distint - prints all the elements of a dlistint_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;	/* Variable pour compter le nombre de nœuds parcourus */
/* Parcourt la liste jusqu'à ce que h soit NULL (fin de liste) */
	while (h)
	{
		printf("%d\n", h->n);	/* Affiche la valeur du nœud actuel */
		h = h->next;	/* Passe au noeud suivant */
		count++;	/* Increments le compteur de noeuds */
	}
	return (count);	/* Retourne le nombre total de noeuds parcourus */
}
