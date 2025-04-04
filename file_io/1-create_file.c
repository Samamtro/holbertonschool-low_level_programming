#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file and writes texte to it
 * @filename: The name of the file to create
 * @text_content: The text to write to the file
 *
 * Return: 1 on success, -1 on failure
 * Description: This function creates a file with the specified name and writes
 */
int create_file(const char *filename, char *text_content)
{
	int fd;	/* Descripteur de fichier */
	/* Nombre de caractères à écrire et nombre de caractères écrits */
	/*
	 * nletters: Nombre de caractères à écrire
	 * nwrite: Nombre de caractères écrits
	 */
	ssize_t nletters, nwrite;

	if (filename == NULL)	/* Vérifie si le nom de fichier est NULL */
		return (-1);	/* Retourne -1 si le nom de fichier est NULL */
	/*
	 * Ouvre le fichier en mode création, lecture et écriture
	 * O_CREAT: Crée le fichier s'il n'existe pas
	 * O_RDWR: Ouvre le fichier en mode lecture et écriture
	 * O_TRUNC: Tronque le fichier à 0 octets si le fichier existe déjà
	 * 0600: Autorise uniquement le propriétaire à lire et écrire
	 */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)	/* Vérifie si l'ouverture du fichier a échoué */
		return (-1);	/* Retourne -1 si l'ouverture a échoué */
	if (text_content == NULL)	/* Vérifie si le contenu du texte est NULL */
	{
		close(fd);	/* Ferme le descripteur de fichier */
		return (1);	/* Retourne 1 si le contenu est NULL */
	}
	nletters = 0;	/* Initialise le nombre de caractères à écrire à 0 */
	while (text_content[nletters] != '\0')
		nletters++;	/* Incrémente le compteur de caractères */
	nwrite = write(fd, text_content, nletters);

	if (nwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
