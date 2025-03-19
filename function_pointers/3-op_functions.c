#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 *
 * Return: sum of 2 number
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtration operator
 * @a: first int
 * @b: second int
 *
 * Return: difference 2 number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: first int
 * @b: second int
 *
 * Return: product of the number
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: first int
 * @b: second int
 *
 * Return: the result of the division of a by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modillo operator
 * @a: first int
 * @b: second int
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
