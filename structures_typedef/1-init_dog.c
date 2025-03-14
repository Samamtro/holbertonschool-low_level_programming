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
	if (d != NULL)
	;
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
