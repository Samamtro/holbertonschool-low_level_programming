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
/* Déclare un pointeur vers le nouveau nœud et un pointeur temporaire pour parcourir la liste */
	dlistint_t *new_node, *temp_node = *h;
/* Initialise un compteur pour suivre l'index du nœud actuel */
	unsigned int count = 0;
/* Vérifie si le pointeur de tête est NULL */
	if (h == NULL)
		return (NULL);	/* Si la tête est NULL, retourne NULL */

	/* Si l'index est 0, ajoute le nouveau nœud au début de la liste */
	if (idx == 0)
	/* Ajoute le nœud au début de la liste */
		return (add_dnodeint(h, n));
	/* Parcourt la liste jusqu'à l'index souhaité ou la fin de la liste */
	/* On parcourt la liste jusqu'à l'index souhaité ou la fin de la liste */
	while (temp_node && count < idx - 1)
	{
		temp_node = temp_node->next;	/* Passe au nœud suivant */
		count++;	/* Incrémente le compteur d'index */
	}
	/* Si on a atteint l'indice précédent et que le nœud est valide */
	if (count == idx - 1 && temp_node)
	{
/* Si le nœud suivant est NULL, on ajoute le nouveau nœud à la fin de la liste */
		if (temp_node->next == NULL)
			return (add_dnodeint_end(h, n));	/* Ajoute le nœud à la fin de la liste */

		new_node = malloc(sizeof(dlistint_t));	/* Alloue de la mémoire pour le nouveau nœud */
		if (new_node == NULL)	/* Vérifie si l'allocation de mémoire a réussi */
			return (NULL);	/* Retourne NULL si cela a échoué */

		new_node->n = n;	/* Définit la valeur du nouveau nœud */
		new_node->next = temp_node->next;	/* Définit le pointeur suivant du nouveau nœud */
		new_node->prev = temp_node;	/* Définit le pointeur précédent du nouveau nœud */

		if (temp_node->next)	/* Si le nœud suivant existe */
	/* Met à jour le pointeur précédent du nœud suivant */
			temp_node->next->prev = new_node;
		temp_node->next = new_node;	/* Met à jour le pointeur suivant du nœud actuel */
	/* Met à jour le pointeur suivant du nœud actuel */

		return (new_node);	/* Retourne l'adresse du nouveau nœud */
	}

	return (NULL);	/* Retourne NULL si l'index est hors de portée ou si la liste est vide */
}
