#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Libère la mémoire allouée pour un tableau 2D d'entiers.
 * @grid: Pointeur vers le tableau 2D à libérer.
 * @height: Nombre de lignes du tableau 2D.
 *
 * Cette fonction libère d'abord chaque ligne du tableau 2D,
 * puis libère le tableau principal.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Parcours chaque ligne et libère la mémoire allouée */
	for (i = 0; i < height; i++)
		free(grid[i]); /* Libération de la ligne i */

	/* Libère la mémoire allouée pour le tableau principal */
	free(grid);
}
