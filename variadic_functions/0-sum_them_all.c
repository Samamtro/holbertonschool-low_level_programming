#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: this is number bof the arguments
 * @...: a variable number of paramters to calculate the sum of
 * Return: always 0
 */
/* La fonction prend un nombre variable d'arguments */
int sum_them_all(const unsigned int n, ...)
{
/*
 * Déclare des variables : 'i' pour la boucle et 'sum' pour la somme des
 * paramètres
 */
	unsigned int i, sum = 0;
/*
*Déclare une variable de type va_list pour gérer les arguments variadiques
*/
	va_list ap;

/* Si le nombre d'arguments est 0, retourne directement 0 */
	if (n == 0)
		return (0);
/*
 * Initialise la liste des arguments variadiques, avec 'n' comme dernier
 * argument passé à la fonction
 */

	va_start(ap, n);

/* Boucle pour itérer sur tous les arguments passés */
	for (i = 0; i < n; i++)
	{
	/* Récupère un argument de type int et l'ajoute à la somme */
		sum += va_arg(ap, int);
	}
	/* Nettoie les ressources utilisées par va_list après utilisation */
	va_end(ap);

	/* Retourne la somme des arguments */
	return (sum);
}
