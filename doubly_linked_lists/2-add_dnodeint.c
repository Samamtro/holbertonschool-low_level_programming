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
	dlistint_t *new_node;	/* Pointer to the new node */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)	/* Check if memory allocation was successful */
		return (NULL);	/* Return NULL if it failed */

	new_node->n = n;	/* Set the value of the new node */
	new_node->prev = NULL;	/* Set the previous pointer to NULL */
	new_node->next = *head;	/* Set the next pointer to the current head */

	if (*head != NULL)	/* If the list is not empty */
	/* Set the previous pointer of the current head to the new node */
		(*head)->prev = new_node;

	*head = new_node;	/* Update the head to point to the new node */

	return (new_node);	/* Return the address of the new element */
}
