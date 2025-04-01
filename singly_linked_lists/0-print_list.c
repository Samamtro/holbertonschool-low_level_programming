#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to the list_t list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	/* On initialise count à 0 pour compter le nombre de nœuds */
	size_t count = 0;

	/*
	 * On utilise une boucle while pour parcourir la liste tant que le pointeur
	 * h n'est pas NULL
	 */
	while (h != NULL)
	{
		if (h->str == NULL)	/* Vérifie si l'élément str est NULL */
		{
			printf("[0] (nil)\n");	/* Si str est NULL, on imprime [0] (nil) */
		}
		else
		{
			/* Sinon, on print len et str lui-même */
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;	/* Passe au nœud suivant */
		count++;	/* Incrémente le compteur de nœuds */
	}
	return (count);	/* Retourne le nombre total de nœuds parcourus */
}
