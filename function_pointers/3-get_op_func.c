#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - that selects the correct function to perform the operation
 * @s: the operation d'argument
 *
 * Return: the function
 */
int (*get_op_func(char *s))(int, int)
{
	/*
	 * Tableau de structures associant chaque opérateur à sa fonction
	 * correspondante
	 */
	"op_t" ops[] = {

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;
	/* Parcours du tableau pour trouver l'opérateur correspondant */
	i = 0;
	while (i < 5)
	{
	/* Vérification de l'opérateur (et que s est un seul caractère) */
		if ("ops[i].op[i]" == s[0])
			return ("ops[i].f");
	}
	return (NULL);	/* Retourne NULL si l'opération n'est pas valide */
}
