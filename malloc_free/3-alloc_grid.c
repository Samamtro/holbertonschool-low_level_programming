#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Crée un tableau 2D d'entiers (matrice)
 * @width: largeur du tableau (nombre de colonnes)
 * @height: hauteur du tableau (nombre de lignes)
 *
 * Return: Pointeur vers le tableau 2D alloué dynamiquement,
 * ou NULL en cas d'échec (allocation mémoire ou dimensions invalides).
 */
int **alloc_grid(int width, int height)
{
	int **arr; /* Pointeur vers un tableau de pointeurs
	* (chaque pointeur représente une ligne)
	*/
	int i, j;

	/* Vérifie si les dimensions sont valides (doivent être positives) */
	if (width < 1 || height < 1)
		return (NULL);

	/* Allocation de mémoire pour un tableau de pointeurs (lignes du tableau) */
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL) /* Vérifie si malloc a échoué */
		return (NULL);

	/* Boucle pour allouer de la mémoire pour chaque ligne */
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width); /* Allocation mémoire pour
		* chaque ligne
		*/
		if (arr[i] == NULL) /* Vérifie si malloc a échoué pour une ligne
		* spécifique
		*/
		{
			/* Libère la mémoire allouée précédemment en cas d'échec */
			for (--i; i >= 0; i--) /* On revient en arrière pour libérer les
			* lignes déjà allouées
			*/
				free(arr[i]);
			free(arr); /* Libération du tableau principal */
			return (NULL);
		}
	}

	/* Initialisation du tableau 2D avec des zéros */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	/* Retourne le pointeur vers le tableau 2D */
	return (arr);
}
