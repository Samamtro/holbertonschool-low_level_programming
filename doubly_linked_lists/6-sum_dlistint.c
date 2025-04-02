#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked
 * list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: the sum of all the data (n) of the list, or 0 if the list is empty
 * Description: this function traverses the doubly linked list adding the value
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;	/* Initialise la somme à 0 */
	/* Parcourt la liste jusqu'à ce que head soit NULL (fin de liste) */
	while (head != NULL)
	{
		sum += head->n;	/* Ajoute la valeur du nœud actuel à la somme */
		head = head->next;	/* Passe au noeud suivant */
	}
	return (sum);	/* Retourne la somme totale */
	/* La fonction retourne la somme de tous les nœuds de la liste */
}
