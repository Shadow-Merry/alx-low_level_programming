#include "main.h"

/**
 * _strlen - functiom
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}

/**
 * check_palindrome - function
 * @l: left index
 * @r: right index
 * @p: possible
 * Return: palindrome or not
 */
int check_palindrome(int l, int r, char *p)
{
	if (l >= r)
		return (1);
	else if (p[l] != p[r])
		return (0);
	else
		return (check_palindrome(l + 1, r - 1, p));
}

/**
 * is_palindrome - function
 * @s: string
 * Return: palindrome or not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
