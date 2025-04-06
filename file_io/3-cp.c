/*
* File: 3-cp.c
* Auth: Brennan D Baraban
*/


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/* Déclarations de fonctions */
char *create_buffer(char *file);	/* Crée un tampon de 1024 octets */
void close_file(int fd);	/* Ferme les descripteurs de fichiers */

/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(char *file)
{
	char *buffer;	/* Pointeur vers le tampon */

	buffer = malloc(sizeof(char) * 1024);	/* Alloue de la mémoire pour le tampon */
	/* Vérifie si l'allocation de mémoire a réussi */
	/* Si l'allocation échoue, affiche une erreur et quitte le programme */
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,	// Affiche une erreur si l'allocation échoue
			"Error: Can't write to %s\n", file);	/* Affiche le nom du fichier */
		exit(99);	/* Quitte le programme avec le code d'erreur 99 */
	}

	return (buffer); /* Retourne le pointeur vers le tampon */
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
	int c;	/* Variable pour stocker le résultat de la fermeture */

	c = close(fd);	/* Ferme le descripteur de fichier */

	if (c == -1)	/* Vérifie si la fermeture a échoué */
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);	/* Affiche une erreur si la fermeture échoue */
		exit(100);	/* Quitte le programme avec le code d'erreur 100 */
		/* Affiche le code d'erreur 100 */
		/* Affiche le descripteur de fichier qui n'a pas pu être fermé */
	}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;	/* Descripteurs de fichiers */
	/* Variables pour stocker les descripteurs de fichiers */
	/* Variables pour stocker le nombre d'octets lus et écrits */
	char *buffer;	/* Pointeur vers le tampon */

	if (argc != 3)	/* Vérifie si le nombre d'arguments est correct */
	/* Si le nombre d'arguments est incorrect, affiche une erreur et quitte le programme */
	/* Affiche une erreur si le nombre d'arguments est incorrect */
	/* Affiche le message d'utilisation */
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");	/* Affiche le message d'utilisation */
		exit(97);	/* Quitte le programme avec le code d'erreur 97 */
		/* Affiche le code d'erreur 97 */
	}

	buffer = create_buffer(argv[2]);	/* Crée un tampon de 1024 octets */
	/* Appelle la fonction create_buffer pour allouer de la mémoire pour le tampon */
	from = open(argv[1], O_RDONLY);	/* Ouvre le fichier source en mode lecture */
	r = read(from, buffer, 1024);	/* Lit 1024 octets du fichier source */
	/* Appelle la fonction read pour lire le contenu du fichier source */
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);	/* Ouvre le fichier de destination en mode écriture */
	/* Ouvre le fichier de destination en mode création, écriture et troncature */

	do {
		if (from == -1 || r == -1)	/* Vérifie si l'ouverture ou la lecture a échoué */
		{
			dprintf(STDERR_FILENO,	/* Affiche une erreur si l'ouverture ou la lecture échoue */
				"Error: Can't read from file %s\n", argv[1]);	/* Affiche le nom du fichier source */
			free(buffer);	/* Libère la mémoire allouée pour le tampon */
			exit(98);	/* Quitte le programme avec le code d'erreur 98 */
			/* Affiche le code d'erreur 98 */
		/* Affiche le descripteur de fichier qui n'a pas pu être ouvert ou lu */
		}

		w = write(to, buffer, r);	/* Écrit le contenu du tampon dans le fichier de destination */
		/* Appelle la fonction write pour écrire le contenu du tampon dans le fichier de destination */
		if (to == -1 || w == -1)	/* Vérifie si l'ouverture ou l'écriture a échoué */
		{
			dprintf(STDERR_FILENO,	/* Affiche une erreur si l'ouverture ou l'écriture échoue */
				"Error: Can't write to %s\n", argv[2]);	/* Affiche le nom du fichier de destination */
			/* Affiche le descripteur de fichier qui n'a pas pu être ouvert ou écrit */
			/* Affiche le code d'erreur 99 */
			free(buffer);	/* Libère la mémoire allouée pour le tampon */
			close_file(from);	/* Ferme le descripteur de fichier source */
			exit(99);	/* Quitte le programme avec le code d'erreur 99 */
		}

		r = read(from, buffer, 1024);	/* Lit 1024 octets du fichier source */
		/* Appelle la fonction read pour lire le contenu du fichier source */
		/* Ouvre le fichier de destination en mode écriture */
		/* Ouvre le fichier de destination en mode création, écriture et troncature */
		to = open(argv[2], O_WRONLY | O_APPEND);	/* Ouvre le fichier de destination en mode ajout */

	} while (r > 0);	/* Continue à lire et écrire tant qu'il y a des octets à lire */

	free(buffer);	/* Libère la mémoire allouée pour le tampon */
	close_file(from);	/* Ferme le descripteur de fichier source */
	close_file(to);	/* Ferme le descripteur de fichier de destination */

	return (0);	/* Retourne 0 si tout s'est bien passé */
}
