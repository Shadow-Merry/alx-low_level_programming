#include "main.h"

/**
 * print_to_98 - function
 * @n: input
 * Return: void
 */
void print_to_98(int n)
{
	int number;

	if (n < 98)
	{
		for (number = n; number <= 98; number++)
		{
			_putchar(number + '0')
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (number = n; number >= 98; number--)
		{
			_putchar(number + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		_putchar(n + '0');
	}
}
