#include "variadic_functions.h"
/*Inclusion du fichier d'en-tête contenant le prototype de la fonction*/
#include <stdio.h>
/* Inclusion de la bibliothèque standard pour utiliser printf */
#include <stdarg.h>
/* Inclusion de stdarg.h pour gérer les arguments variables */

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: avariable number of paramters to calculate the sum of
 * Return: always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	/* Déclaration d'une liste d'arguments variables */
	char *str;
	/* Pointeur pour stocker temporairement chaque chaîne de caractères */
	unsigned int index;
	/* Variable pour parcourir les arguments */

/* Initialisation de la liste des arguments variables */
	va_start(strings, n);

	/* Boucle pour récupérer et afficher chaque chaîne passée en paramètre */
	for (index = 0; index < n; index++)
	{
		/* Récupération de l'argument suivant dans la liste */
		str = va_arg(strings, char *);

		/* Vérifie si la chaîne est NULL */
		if (str == NULL)
		/* Affiche "(nil)" au lieu d'une valeur NULL */
			printf("(nil)");
		else
		/* Affiche la chaîne normale */
			printf("%s", str);

		/*
		 * Affiche le séparateur uniquement si ce n'est pas le dernier
		 * élément et si le séparateur n'est pas NULL
		 */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* Ajoute une nouvelle ligne après l'affichage des chaînes */
	printf("\n");

	/* Libère la mémoire utilisée par va_list */
	va_end(strings);
}
