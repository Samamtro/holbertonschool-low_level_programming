#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: pointer to the list_t list
 * @str: string to the new node
 *
 * Return: the address of the new element, or NUll if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;	/* Pointeur vers le nouveau nœud */
	list_t *last = *head;	/* Pointeur vers le dernier nœud */
	unsigned int len = 0;	/* Longueur de la chaîne */

	/* Calcul de la longueur de la chaîne */
	while (str[len])
		len++;

	/* on alloue de la memoire pour le nouveau noeud */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)	/* Vérifie si l'allocation a échoué */
		return (NULL);

	/* on copie la chaine str dans le nouveau noeud */
	new_node->str = strdup(str);	/* Copie la chaîne dans le nœud */
	if (new_node->str == NULL)	/* Vérifie si la copie a échoué */
	{
		free(new_node);	/* Libère la mémoire du nœud */
		return (NULL);
	}

	new_node->len = len;	/* Initialise la longueur de la chaîne */
	new_node->next = NULL;	/* Initialise le pointeur next à NULL */
	/* Si la liste est vide, le nouveau nœud devient le premier */
	if (*head == NULL)
	{
		*head = new_node;	/* Met a jour le pointeur head */
		return (new_node); /* Returne le nouveau noeud */
	}

	while (last->next != NULL) /* On parcourt jusqu'au dernier nœud */
		last = last->next;	/* on passe au noeud suivant */
		last->next = new_node; /* Le dernier nœud pointe vers le nouveau nœud */

	return (new_node); /* Retourne le nouveau nœud */
}
