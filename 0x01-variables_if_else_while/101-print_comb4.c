#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 *
 * Return: 0
 */
int main(void)
{
	int d;
	int a;

	for (d = 0; d < 8; d++)
	{
		for (a =1
		putchar((d * 1) + '0');
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');
		if (d != 89){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
