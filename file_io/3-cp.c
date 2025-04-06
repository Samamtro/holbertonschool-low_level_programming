#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * _copy_file - Copies the content of one file to another
 * @file_from: Path to the source file
 * @file_to: Path to the destination file
 *
 * Description: This function reads the content of the file specified
 * by `file_from` and writes it to the file specified by `file_to`.
 * It handles errors such as inability to read, write, or close files.
 */
void _copy_file(const char *file_from, const char *file_to)
{
	int fd, fd2, filecheck;
	char buffer[1024];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	while ((filecheck = read(fd, buffer, 1024)) > 0)
	{
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		filecheck = write(fd2, buffer, filecheck);
		if (filecheck == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	if (close(fd2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);
}

/**
 * main - Entry point for the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Description: This program copies the content of a file to another file.
 * It expects exactly two arguments: the source file and the destination file.
 * If the arguments are invalid or an error occurs during the copy process,
 * the program exits with an appropriate error code.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	_copy_file(argv[1], argv[2]);

	return (0);
}
