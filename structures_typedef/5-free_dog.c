#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - frees any memory allocated by dog
 * @d: pointer to struct
 *
 * Return: what does it return?
 */
void free_dog(dog_t *d)
{
	if (!d)	/* Vérifie si le pointeur est NULL pour éviter une erreur */
		return;

	free(d->name);	/* Libère la mémoire allouée pour le nom du chien */
	free(d->owner);	/* Libère la mémoire allouée pour le propriétaire */
	free(d);	/* Libère la structure elle-même */
}
