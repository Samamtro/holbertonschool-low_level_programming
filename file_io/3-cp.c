#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#define BUFFER_SIZE 1024
#include "main.h"

/**
 * print_error - Prints an error message to stderr
 * @message: The error message to print
 * @code: The error code to return
 *
 */
