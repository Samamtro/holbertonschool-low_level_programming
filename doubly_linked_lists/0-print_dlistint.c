#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;	/* compteur de noeuds */
	/* Parcours de la liste jusqu'à la fin */

	while (h != NULL)	/* tant que le pointeur n'est pas NULL */
	/* on affiche la valeur du noeud courant */
	/* et on passe au noeud suivant */
	/* on incremente le compteur */
	{
		printf("%d\n", h->n);	/* on affiche la valeur du noeud courant */
		h = h->next;	/* on passe au noeud suivant */
		count++;	/* on incremente le compteur */
	}
	return (count);	/* on retourne le nombre de noeuds */
}
