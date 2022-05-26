#include "main.h"

/**
 * binary_to_uint - function
 * @b: binary number
 * Return: converted no
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int val;

	if (!b)
		return (0);
	else
		for (i = 0; b[i]; i++)
		{
			if (b[i] > '1' || b[i] < '0')
				return (0);
			val = 2 * val + (b[i] - '0');
		}
	return (val);
}
		
