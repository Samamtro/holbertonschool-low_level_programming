#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * copy_file - Copies the content of a file to another file
 * @file_from: The source file to copy from
 * @file_to: The destination file to copy to
 *
 * Return: 0 on success, -1 on failure
 * Description: Opens the source file for reading and the destination file
 * for writing. Reads data from the source file in chunks and writes it
 * to the destination file. Handles errors for file operations and closes
 * file descriptors properly.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (-1);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		close(fd_from);
		return (-1);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	return (0);
}

/**
 * main - Entry point for the program
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, or an error code on failure
 * Description: This function validates arguments and calls cp to copy files.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (copy_file(argv[1], argv[2]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Operation failed\n");
		return (98);
	}
	return (0);
}
