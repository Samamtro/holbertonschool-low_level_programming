#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint -Frees a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: void
 * Description: this function frees all the nodes in the doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;	/* Pointer to the current node */
	/* Parcourt la liste jusqu'à ce que head soit NULL (fin de liste) */
	while (head)
	{
		temp_node = head->next;	/* Stocke le pointeur vers le nœud suivant */
		free(head);	/* Libère la mémoire du nœud actuel */
		head = temp_node;	/* Passe au noeud suivant */
	}
	/* la mémoire de tous les noeuds a été libérée */
	/* head est maintenant NULL */
}
