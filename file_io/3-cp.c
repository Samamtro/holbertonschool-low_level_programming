#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * _errexit - affiche un message d'erreur et quitte
 * @format: chaîne de format (ex: "Error: Can't read from file %s\n")
 * @file: nom du fichier concerné
 * @code: code de sortie
 */
void _errexit(const char *format, const char *file, int code)
{
	dprintf(STDERR_FILENO, format, file);
	exit(code);
}

/**
 * _cp - copie le contenu d'un fichier dans un autre
 * @file_from: fichier source
 * @file_to: fichier destination
 */
void _cp(char *file_from, char *file_to)
{
	int fd1, fd2, numread, numwrote, total;
	char buffer[1024];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		_errexit("Error: Can't read from file %s\n", file_from, 98);

	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		_errexit("Error: Can't write to %s\n", file_to, 99);

	while ((numread = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		total = 0;
		while (total < numread)
		{
			numwrote = write(fd2, buffer + total, numread - total);
			if (numwrote == -1)
				_errexit("Error: Can't write to %s\n", file_to, 99);
			total += numwrote;
		}
	}

	if (numread == -1)
		_errexit("Error: Can't read from file %s\n", file_from, 98);

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * main - point d'entrée, copie un fichier dans un autre
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 * Return: 0 en cas de succès, code d'erreur sinon
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	_cp(argv[1], argv[2]);

	return (0);
}
