#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: pointer to the head of the doubly linked list
 * @idx: index where the new node should be added
 * @n: value to be added in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* Pointeur pour le nouveau nœud et le nœud temporaire */
	dlistint_t *new_node, *temp_node = *h;
	unsigned int count = 0;	/* Compteur pour l'index du nœud actuel */

	if (h == NULL)	/* Vérifier si la liste est vide */
		return (NULL);	/* Retourner NULL si la liste est vide */

	if (idx == 0)	/* Si l'index est 0, ajouter au début de la liste */
		return (add_dnodeint(h, n));	/* Appeler la fonction add_dnodeint */

	/* Parcourir la liste jusqu'à l'index souhaité */
	while (temp_node && count < idx - 1)
	{
		temp_node = temp_node->next;	/* Passer au nœud suivant */
		count++;	/* Incrémenter le compteur d'index */
	}
	/* Si on a trouvé l'index souhaité et que le nœud existe */
	if (count == idx - 1 && temp_node)
	{
		/* Allouer de la mémoire pour le nouveau nœud */
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)	/* Vérifier si l'allocation a réussi */
			return (NULL);	/* Retourner NULL si l'allocation échoue */

		new_node->n = n;	/* Initialiser la valeur du nouveau nœud */
		/* Lier le nouveau nœud au suivant */
		new_node->next = temp_node->next;
		new_node->prev = temp_node;	/* Lier le nouveau nœud au précédent */

		if (temp_node->next)	/* Si le nœud suivant existe */
		/* Lier le suivant au nouveau nœud */
			temp_node->next->prev = new_node;
		temp_node->next = new_node; /* Lier le précédent au nouveau nœud */

		return (new_node); /* Retourner l'adresse du nouveau nœud */
	}
	/* Retourner NULL si l'index est hors de portée ou si la liste est vide */
	return (NULL);
}
