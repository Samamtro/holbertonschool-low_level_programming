#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the begiming of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @n: the integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 * Description: This function creates a new node, sets its value to n,
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;	/* Déclaration d'un pointeur pour le nouveau nœud */

	/* Allocation de mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)	/* Vérification de la réussite de l'allocation mémoire */
		return (NULL);	/* Retourne NULL si l'allocation a échoué */
	/* Initialisation des valeurs du nouveau nœud */
	new_node->n = n;	/* Assigne la valeur n au nœud */
	new_node->prev = NULL;	/* Le nouveau nœud est le premier, donc prev est NULL */
	new_node->next = *head;	/* Son next pointe vers l'ancien premier élément */

	/* Si la liste n'était pas vide, mettre à jour l'ancien premier élément */
	if (*head != NULL)
		(*head)->prev = new_node;	/* Met à jour le prev de l'ancien premier nœud */


	*head = new_node;	 /* Mettre à jour le pointeur head pour pointer vers le nouveau nœud */

	return (new_node);	/* Retourne l'adresse du nouveau nœud inséré */
}
