#include "main.h"

 /**
  * _strcpy - Copies a string pointed to by @src, including the
  *           terminating null byte, to a buffer pointed to by @dest.
  * @dest: A buffer to copy the string to.
  * @src: The source string to copy.
  *
  * Return: A pointer to the destination string @dest.
  */

  char *_strcpy(char *dest, char *src)
  {
	int inc = 0;

	while (*(src + inc) != '\0')
	{
  *(dest + inc) = *(src + inc);
  inc++;
  }
  *(dest + inc) = '\0';
  return (dest);
  }
