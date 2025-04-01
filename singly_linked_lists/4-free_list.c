#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: pointer to the list_t list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;	/* Pointeur temporaire pour stocker le nœud actuel */

	while (head != NULL)	/* Parcours de la liste jusqu'à la fin */
	{
		temp = head;	/* stocke le noeud actuel */
		head = head->next;	/* Déplace le pointeur vers le noeud suivant */
		free(temp->str);	/* libère la chaine de caracteres */
		free(temp);	/* libère le noeud actuel */
		temp = NULL;	/* Réinitialise le pointeur temporaire */
	}
}


