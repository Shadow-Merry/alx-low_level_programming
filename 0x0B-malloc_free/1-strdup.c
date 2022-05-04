#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: string that are going to duplicate
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
	{
		strnew = (char *)mallox(n + 1 * sizeof(char));
		if (strnew != NULL)
		{
			for (i = 0; str[i] != '\0'; i++)
				strnew[i] = str[i];
		}
		else
		{
			return (NULL);
		}
		strnew[i] = '\0';
	}
	return (strnew);
}
