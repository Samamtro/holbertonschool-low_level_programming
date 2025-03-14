#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * new_dog - a function that creates a new dog
 * @name: the string from main, name to the pret
 * @age: the string from main, age to the pret
 * @owner: the string from main, owner to the pret
 *
 * Return: pointer to the new dog or NULL if an error occurs
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));	/* Alloue de la mémoire pour un objet de type
	* `dog_t`
	*/
	if (p == NULL)
	{
		return (NULL);	/* Si l'allocation échoue, retourne NULL */
	}
	if (name == NULL)
	{
		free(p);	/* Libère la mémoire allouée pour la structure dog_t */
		free(owner); /* Libère la mémoire allouée pour le propriétaire
		* (si elle était allouée)
		*/
		return (NULL);	/* Retourne NULL si le nom est NULL */
	}
	if (owner == 0)
	{
		free(p);	/* Libère la mémoire allouée pour la structure dog_t */
		free(name);	/* Libère la mémoire allouée pour le nom du chien
		* (si elle était allouée)
		*/
		return (NULL); /* Retourne NULL si le nom est NULL */
	}
	if (age == 0)
	{
		free(p);
		free(name);
		free(owner);
		return (NULL);
	}
	p->name = name;	/* Initialise le champ `name` de la structure `dog_t` */
	p->owner = owner;	/* Initialise le champ `owner` de la structure `dog_t`
	*/
	p->age = age;	/* Initialise le champ `age` de la structure `dog_t` */
	return (p);	/* Retourne le pointeur vers l'objet `dog_t` nouvellement créé.
	*/
}
