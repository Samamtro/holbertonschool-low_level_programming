#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	/* Déclaration d'une variable de type char pour stocker chaque lettre*/
	char a;

	/* Boucle qui parcourt les lettres de 'a' à 'z'*/
	for (a = 'a'; a <= 'z'; a++)
	/* Affichage de la lettre actuelle */
		_putchar(a);
	/* Ajout d'un retour à la ligne après l'affichage de l'alphabet */
	_putchar('\n');
}
