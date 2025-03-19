#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
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
	op_t ops[] = {

		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		/* Marqueur de fin du tableau */
		{NULL, NULL},
	};
	int i = 0;

	/* Parcours du tableau jusqu'à trouver l'opérateur correspondant ou NULL */
	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}
	/* Retourne la fonction associée à l'opérateur trouvé */
	return (ops[i].f);
}
