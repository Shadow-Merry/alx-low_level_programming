#include "main.h"

/**
 * print_last_digit - function
 * @n: input
 * Return: last digit
 */
int print_last_digit(int n)
{
	int n1;

	n1 = (n % 10);

	if (n1 < 0)
	{
		n1 = (-1 * n1);
	}
	_putchar(n1 + '0');
	return (n1);
}
