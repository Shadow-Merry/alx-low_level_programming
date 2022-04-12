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
		while (n <= 98)
		{
			_putchar((n) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	if (n > 98)
	{
		while (n >= 98)
		{
			_putchar((n) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar((n) + '0');
	}
}
