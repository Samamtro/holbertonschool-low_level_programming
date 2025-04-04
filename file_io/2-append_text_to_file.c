#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: The name of the file to append to
 * @text_content: The text to append to the file
 *
 * Return: 1 on success, -1 on failure
 * Description: This function opens a file, appends text to it, and closes the
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;	/* Descripteur de fichier */
	/* Nombre de caractères à écrire et nombre de caractères écrits */
	ssize_t nletters, nwrite;

	if (filename == NULL)	/* Vérifie si le nom de fichier est NULL */
		return (-1);	/* Retourne -1 si le nom de fichier est NULL */
	/* Ouvre le fichier en mode écriture et ajout */
	/*
	 * O_WRONLY: Ouvre le fichier en mode écriture
	 * O_APPEND: Ajoute le contenu à la fin du fichier
	 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)	/* Vérifie si l'ouverture du fichier a échoué */
		return (-1);	/* Retourne -1 si l'ouverture a échoué */
	if (text_content == NULL)	/* Vérifie si le contenu du texte est NULL */
	{
		close(fd);	/* Ferme le descripteur de fichier */
		return (1);	/* Retourne 1 si le contenu est NULL */
	}
	nletters = 0;	/* Initialise le nombre de caractères à écrire à 0 */
	/* Compte le nombre de caractères dans le contenu du texte */
	/*
	 * Utilise une boucle while pour compter les caractères jusqu'à '\0'
	 * nletters: Nombre de caractères à écrire
	 * nwrite: Nombre de caractères écrits
	 * write: Écrit le contenu du texte dans le fichier
	 */
	while (text_content[nletters] != '\0')
		nletters++;	/* Incrémente le compteur de caractères */
	nwrite = write(fd, text_content, nletters);

	if (nwrite == -1)	/* Vérifie si l'écriture a échoué */
	{
		close(fd);	/* Ferme le descripteur de fichier */
		return (-1);	/* Retourne -1 si l'écriture a échoué */
	}
	close(fd);	/* Ferme le descripteur de fichier */
	return (1);	/* Retourne 1 si l'écriture a réussi */
}
