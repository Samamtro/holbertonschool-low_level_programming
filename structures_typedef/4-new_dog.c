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
	dog_t *newDog;
	int lName, lOwner, i;

/* Allocation de mémoire pour la structure dog_t */
	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	/* Calcul de la longueur de name (y compris le caractère nul '\0') */
	for (lName = 0; *(name + lName); lName++)
		;
	lName++;
	/* Calcul de la longueur de owner (y compris le caractère nul '\0') */
	for (lOwner = 0; *(owner + lOwner); lOwner++)
		;
	lOwner++;

	/* Allocation de mémoire pour le nom du chien */
	newDog->name = malloc(lName * sizeof(char));
	if (newDog->name == NULL)
	{
		/*Libération de la structure si l'allocation échoue */
		free(newDog);
		return (NULL);
	}
	/* Copie du nom dans la mémoire nouvellement allouée */
	for (i = 0; i < lName; i++)
		*(newDog->name + i) = *(name + i);

	/* Assignation de l'âge du chien */
	newDog->age = age;

	/* Allocation de mémoire pour le propriétaire du chien */
	newDog->owner = malloc(lOwner * sizeof(char));
	if (newDog->owner == NULL)

	{
		/* Libération de la mémoire allouée précédemment */
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	/* Copie du propriétaire dans la mémoire nouvellement allouée */
	for (i = 0; i < lOwner; i++)
	*(newDog->owner + i) = *(owner + i);

	return (newDog);
}
