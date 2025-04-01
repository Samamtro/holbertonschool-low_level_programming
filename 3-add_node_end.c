#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The value to store in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_node_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL) /* If the list is empty, set new_node as head */
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL) /* Traverse to the last node */
		temp = temp->next;

	temp->next = new_node; /* Link the last node to the new node */
	new_node->prev = temp;

	return (new_node);
}
