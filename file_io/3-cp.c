#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * cp - Copies the content of a file to another file
 * @file_from: The source file
 * @file_to: The destination file
 *
 * Return: 0 on success, -1 on failure
 * Description: This function copies the content of one file to another.
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;	/* File descriptors for source and destination files */
	char buffer[1024];	/* Buffer to hold data during copying */
	ssize_t bytes_read, bytes_written;	/* Number of bytes read and written */

	/* Open the source file in read-only mode */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		perror("Error opening source file");
		return (-1);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		perror("Error opening destination file");
		close(fd_from);
		return (-1);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			perror("Error writing to destination file");
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}
	if (bytes_read == -1)
	{
		perror("Error reading from source file");
		close(fd_from);
		close(fd_to);
		return (-1);
	}
	close(fd_from); /* Close the source file descriptor */
	close(fd_to); /* Close the destination file descriptor */
	return (0); /* Return 0 on success */
}



