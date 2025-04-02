#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the doubly linked list
 * @index: the index of the node to be returned
 *
 * Return: the address of the node at index index, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp_node = head;	/* Pointeur pour parcourir la liste */
	unsigned int count = 0;	/* Compteur pour l'index du nœud actuel */

/*
 *Parcourir la liste jusqu'à atteindre l'index souhaité ou
 *la fin de la liste
 */
	while (temp_node && count < index)
	{
		temp_node = temp_node->next;	/* Passer au nœud suivant */
		count++;	/* Incrémenter le compteur d'index */
	}

	if (count == index)	/* Si on a trouvé le nœud à l'index souhaité */
		return (temp_node);	/* Retourner l'adresse du nœud */
	else
		return (NULL);	/* Retourner NULL si l'index est hors de portée */
	/* La fonction retourne NULL si l'index est hors de portée */
}
