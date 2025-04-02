#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @n: the integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 * Description: this function creates a new node and sets its value to n
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;	/* Pointeur vers le nouveau nœud */
	dlistint_t *temp_node = NULL;	/* Pointeur pour parcourir la liste */
	/* Allouer de la mémoire pour le nouveau nœud */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)	/* Vérifier si l'allocation de mémoire a réussi */
		return (NULL);	/* Retourner NULL si cela a échoué */
	new_node->n = n;	/* Définir la valeur du nouveau nœud */
	new_node->next = NULL;	/* Initialiser le pointeur suivant à NULL */

	if (*head == NULL)	/* Si la liste est vide */
	{
		new_node->prev = NULL;	/* Définir le pointeur précédent à NULL */
		/* Mettre à jour le head pour pointer vers le nouveau nœud */
		*head = new_node;
		return (new_node);	/* Retourner l'adresse du nouvel élément */
	}

	temp_node = *head;	/* Initialiser le pointeur temporaire au head */
	while (temp_node->next != NULL)	/* Parcourir la liste jusqu'à la fin */
		temp_node = temp_node->next;	/* Avancer au nœud suivant */
	/* Définir le pointeur suivant du dernier nœud */
	temp_node->next = new_node;
	/* Définir le pointeur précédent du nouveau nœud */
	new_node->prev = temp_node;
	return (new_node);	/* Retourner l'adresse du nouvel élément */
}
