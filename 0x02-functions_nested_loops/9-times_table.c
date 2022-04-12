#include "main.h"

/**
 * times_table - function
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, number;

	for (row = 0; row < 10; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col < 10; col++)
		{
			number = row * col;
			if ((number / 10) > 0)
			{
				_putchar((number / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((number % 10) + '0');
			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
}
