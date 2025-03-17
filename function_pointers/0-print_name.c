#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: this is name to pointers
 * @f: this is pointers to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
/* Vérification des pointeurs pour éviter les erreurs d'exécution */
	if (name != NULL && f != NULL)
/* Appel de la fonction passée en paramètre avec le nom comme argument */
		f(name);
}
