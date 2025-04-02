#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 * linked list
 * @head: pointer to the head of the doubly linked list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node = *head;	/* Pointeur pour parcourir la liste */
	unsigned int count = 0;	/* Compteur pour l'index du nœud actuel */

	if (!head || !*head)	/* Vérifier si la liste est vide */
		return (-1);	/* Retourner -1 si la liste est vide */

	while (temp_node && count < index)	/* Parcourir la liste */
	{
		temp_node = temp_node->next;	/* Passer au nœud suivant */
		count++;	/* Incrémenter le compteur d'index */
	}

	if (count == index)	/* Si on a trouvé le nœud à l'index souhaité */
	{
		if (temp_node->prev)	/* Si le nœud précédent existe */
		/* Lier le nœud précédent au suivant */
			temp_node->prev->next = temp_node->next;
		else
		/* Mettre à jour le head si on supprime le premier nœud */
			*head = temp_node->next;

		if (temp_node->next)	/* Si le nœud suivant existe */
		/* Lier le nœud suivant au précédent */
			temp_node->next->prev = temp_node->prev;

		free(temp_node);	/* Libérer la mémoire du nœud supprimé */
		return (1);	/* Retourner 1 si la suppression a réussi */
	}
	return (-1);	/* Retourner -1 si l'index est hors de portée */
}
