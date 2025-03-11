#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first chaine in caractere
 * @s2: two chaine in caratere
 *
 * Return: pointer to the new concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	/* Partie 1 Déclaration des variables */
	int len1 = 0, len2 = 0, i;
	char *concat_str;

	/*
	* Partie 2 Vérifier si les chaînes sont NULL et les traiter comme des
	chaînes vides
	*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Partie 3 Calcul de la longueur de s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Partie 4 Calcul de la longueur de s2 */
	while (s2[len2] != '\0')
		len2++;
	/*
	*Partie 5 Allocation dynamique d'un nouvel espace mémoire pour la
	concaténation
	*/
	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
	{
		/* Retourne NULL si l'allocation échoue */
		return (NULL);
	}
	/* Partie 6 Copier s1 dans concat_str */
	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];
	/* Partie 7 Copier s2 après s1 dans concat_str */
	for (i = 0; i < len2; i++)
		concat_str[len1 + i] = s2[i];
	/* Partie 8 Ajouter le caractère nul à la fin pour terminer la chaîne */
		concat_str[len1 + len2] = '\0';
	/* Partie 9 Retourne le pointeur vers la nouvelle chaîne concaténée */
	return (concat_str);
}

