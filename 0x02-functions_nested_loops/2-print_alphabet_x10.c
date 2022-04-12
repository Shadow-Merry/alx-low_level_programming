#include "main.h"

/**
 * print_alphabet_x10 - function
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int number;

	for (number = 0; number < 10; number++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
