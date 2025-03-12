#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the string to append to
 * @s2: the string to concatenate from
 * @n: this is variable
 *
 * Return: the number of bytes from s1 to concatenate to s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empt;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	empt = "";
	/* Si s1 est NULL, on l'assigne à une chaîne vide */
	if (s1 == NULL)
		s1 = empt;
	/* Si s2 est NULL, on l'assigne également à une chaîne vide */
	if (s2 == NULL)
		s2 = empt;
	/* Calculer la longueur de s1 */
	while (s1[len] != '\0')
		len++;
	/* Calculer la taille totale de la nouvelle chaîne, tail s1 + n */
	size = (len + n) * sizeof(*nstr);
	/* Allouer de la mémoire pour la nouvelle chaîne +1 pour le caractè '\0' */
	nstr = malloc(size + 1);
	/* Vérifier si l'allocation a échoué */
	if (nstr == NULL)
		return (NULL);
	i = 0;
	/* Copier les caractères de s1 dans la nouvelle chaîne */
	while (i < size && s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	/* Copier les n premiers caractères de s2 dans la nouvelle chaîne */
	while (i < size && s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}

