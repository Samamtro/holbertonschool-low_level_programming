#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	/* Déclaration de la variable pour stocker les lettres de l'alphabet */
	char ch;
	/* Déclaration d'un compteur pour suivre le nombre de répétitions */
	int i;

	/* Initialisation du compteur à 0 */
	i = 0;

	/* Boucle pour répéter l'affichage de l'alphabet 10 fois */
	while (i < 10)
	{
	/* Initialisation de la variable ch à la première lettre de l'alphabet */
		ch = 'a';
		/* Boucle pour parcourir l'alphabet de 'a' à 'z' */
		while (ch <= 'z')
		{
		/* Affichage du caractère courant */
			_putchar(ch);
		/* Passage au caractère suivant */
			ch++;
		}
		/* Passage à la ligne après l'affichage d'un alphabet complet */
		_putchar('\n');
		/* Incrémentation du compteur pour la prochaine itération */
		i++;
	}
}
