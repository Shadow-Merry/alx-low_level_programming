#include "main.h"

/**
 * times_table - function
 *
 * Return: void
 */
void times_table(void)
{
	int row, col;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		for (col = 1; col < 10; col++)
		{
			_putchar((row * col) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}
