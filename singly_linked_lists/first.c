#include "lists.h"
#include <stdio.h>
/**
 * premain - Fonction qui s'exécute avant la fonction main.
 *
 * Cette fonction imprime un message spécifique avant que la
 * fonction main ne soit exécutée.
 */

/* Fonction qui s'exécutera avant la fonction main */
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
