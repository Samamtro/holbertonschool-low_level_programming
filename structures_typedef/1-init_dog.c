#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  a function that initialize a variable of type struct dog
 * @d: the struct
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner to dog's
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Vérification si le pointeur d est NULL pour éviter un accès à une adresse
	* invalide
	*/
	if (d == NULL)
	/* Instruction vide (inutile ici, pourrait être remplacée par un return) */
	;
	else
	{
		/* Affectation des valeurs aux membres de la structure */
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
