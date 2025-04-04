#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters it could read and print, or 0 if it
 * fails
 * Description: This function opens a file, reads its content, and prints it
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;	/* Descripteur de fichier */
	ssize_t n;	/* Nombre de caractères lus */
	char *buffer;	/* Tampon pour stocker le contenu du fichier */

	if (filename == NULL)	/* Vérifie si le nom de fichier est NULL */
		return (0);	/* Retourne 0 si le nom de fichier est NULL */

	fd = open(filename, O_RDONLY);	/* Ouvre le fichier en mode lecture seule */
	if (fd == -1)	/* Vérifie si l'ouverture du fichier a échoué */
		return (0);	/* Retourne 0 si l'ouverture a échoué */
	/* Alloue de la mémoire pour le tampon */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)	/* Vérifie si l'allocation de mémoire a échoué */
	{
		close(fd);	/* Ferme le descripteur de fichier */
		return (0);	/* Retourne 0 si l'allocation a échoué */
	}
	n = read(fd, buffer, letters);	/* Lit le contenu du fichier */
	if (n == -1)	/* Vérifie si la lecture a échoué */
	{
		free(buffer);	/* Libère la mémoire allouée pour le tampon */
		close(fd);	/* Ferme le descripteur de fichier */
		return (0);	/* Retourne 0 si la lecture a échoué */
	}
	/*
	 * Écrit le contenu du tampon sur la sortie standard
	 * Utilise write pour écrire le contenu du tampon
	 * Écrit le contenu du tampon sur la sortie standard
	 */
	n = write(STDOUT_FILENO, buffer, n);
	if (n == -1)	/* Vérifie si l'écriture a échoué */
	{
		free(buffer);	/* Libère la mémoire allouée pour le tampon */
		close(fd);	/* Ferme le descripteur de fichier */
		return (0);	/* Retourne 0 si l'écriture a échoué */
	}
	free(buffer);
	close(fd);
	return (n);
}
