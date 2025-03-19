#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/* Déclaration des variables pour stocker les opérandes et le résultat */
	int a, b, resultat;
	/*
	 * Pointeur vers une fonction prenant deux entiers en paramètre et
	 * retournant un entier
	 */
	int (*o)(int, int);

/* Vérifie si le nombre d'arguments est incorrect */
	if (argc != 4)
	{
		printf("Error\n");
		/* Code d'erreur 98 si le nombre d'arguments est incorrect */
		exit(98);
	}

	/* Convertit le premier argument en entier */
	a = atoi(argv[1]);
	/* Convertit le troisième argument en entier */
	b = atoi(argv[3]);
	/* Récupère la fonction correspondant à l'opérateur passé en argument */
	o = get_op_func(argv[2]);

	/* Vérifie si l'opérateur est invalide (get_op_func renvoie NULL) */
	if (o == NULL)
	{
		printf("Error\n");
		/* Code d'erreur 99 si l'opérateur est invalide */
		exit(99);
	}

	/* Vérifie si l'on tente de diviser ou de faire un modulo par zéro */
	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		/* Code d'erreur 100 en cas de division ou modulo par zéro */
		exit(100);
	}
	/* Appelle la fonction d'opération et stocke le résultat */
	resultat = o(a, b);

	/* Affiche le résultat de l'opération */
	printf("%d\n", resultat);

	/* Fin normale du programme */
	return (0);
}
