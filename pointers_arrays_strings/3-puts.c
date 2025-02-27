#include "main.h"

/**
 * _puts - this is the function for puts
 * @str: to paramer to function_put
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
