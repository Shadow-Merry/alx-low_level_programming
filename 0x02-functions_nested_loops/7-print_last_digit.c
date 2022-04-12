#include "main.h"

/**
 * print_last_digit - function
 * @n: input
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n <= 9)
	{
		return (n);
	}
	else
	{
		return ((n % 10));
	}
}
