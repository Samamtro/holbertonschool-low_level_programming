#include "main.h"
/**
 * _pow_recursion - a function that returns the value
 * @x: x and y
 * @y: the power number
 *
 * Return: power result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

