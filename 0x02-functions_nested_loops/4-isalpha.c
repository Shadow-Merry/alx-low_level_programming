#include "main.h"

/**
 * _isalpha - function
 * @c: input
 * Return: one if true
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
