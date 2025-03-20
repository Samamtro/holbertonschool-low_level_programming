#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * @...: avariable number of paramters to calculate the sum of
 * Return: always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Déclaration d'une liste d'arguments variadiques */
	va_list nums;
	unsigned int index;

	/* Initialisation de la liste des arguments variadiques */
	va_start(nums, n);

	/* Boucle pour parcourir et afficher chaque nombre passé en argument */
	for (index = 0; index < n; index++)
	{
	/* Récupération et affichage du prochain entier */
		printf("%d", va_arg(nums, int));

	/*
	 * Vérifie si on doit afficher le séparateur (évite d'afficher après
	 * le dernier nombre)
	 */
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	/* Ajout d'un saut de ligne après l'affichage des nombres */
	printf("\n");

	/* Libération de la liste des arguments variadiques */
	va_end(nums);
}
