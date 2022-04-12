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
		for (col = 0; col < 10; col++)
		{
			_putchar(row * col);
			_putchar(',');
		}
		_putchar('\n');
	}
}
