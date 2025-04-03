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
	/* Pointer to traverse the list */
	dlistint_t *new_node, *temp_node = *h;
	/* Compteur pour suivre la position actuelle dans la liste */
	unsigned int count = 0;

	if (h == NULL)	/* Vérifie si la liste est valide */
		return (NULL);

	if (idx == 0)	/* Si l'index est 0, on ajoute le nœud au début */
	/* Appelle la fonction pour ajouter au début */
		return (add_dnodeint(h, n));

	/* Parcourt la liste jusqu'à l'index souhaité */
	/* ou jusqu'à la fin de la liste */
	/* On s'arrête si on atteint l'index souhaité ou la fin de la liste */
	while (temp_node && count < idx - 1)
	{
		temp_node = temp_node->next;	/* Avance au nœud suivant */
		/* Incrémente le compteur d'index */
		count++;
	}

	if (count == idx - 1 && temp_node)	/* Si on a trouvé l'index souhaité */
	{
		if (temp_node->next == NULL)	/* Si on est à la fin de la liste */
			return (add_dnodeint_end(h, n));	/* Ajoute à la fin */

		/* Crée un nouveau nœud et le lie dans la liste */
		/* Alloue de la mémoire pour le nouveau nœud */
	{
		/* Vérifie si l'allocation de mémoire a réussi */
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)	/* Vérifie si l'allocation a échoué */
			return (NULL);	/* Retourne NULL si l'allocation échoue */
		/* Initialise le nouveau nœud */
		/* Définit la valeur du nouveau nœud */
		/* Définit le pointeur suivant du nouveau nœud */
		new_node->n = n;	/* Définit la valeur du nouveau nœud */
		/*Le suivant du nouveau nœud est l'ancien suivant de temp_node */
		new_node->next = temp_node->next;
		/* Définit le pointeur précédent du nouveau nœud */
		new_node->prev = temp_node;

		if (temp_node->next)	/* Si le nœud suivant existe */
		/* Met à jour le pointeur précédent du nœud suivant */
			/* Définit le pointeur précédent du nœud suivant */
			/* Met à jour le pointeur précédent du nœud suivant */
			temp_node->next->prev = new_node;
		/* Met à jour le pointeur suivant de temp_node */
		temp_node->next = new_node;

		return (new_node);	/* Retourne l'adresse du nouveau nœud */
	}

	return (NULL);	/* Retourne NULL si l'index est hors de portée */
}
