#include "main.h"

/**
 * _sqrt_recursion - function
 * @n: number
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt_recursion(1, n));
}
