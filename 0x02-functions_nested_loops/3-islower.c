#include "main.h"

/**
 * _islower - function
 * @c: the input
 * Return: 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
