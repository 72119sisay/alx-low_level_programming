#include "main.h"
#include <stdio.h>

/**
 *puts2 - prints very other character in string.
 *@str: pointer to string
 *
 *Return: void.
 */
void puts22(char *str)
{
	int i;

	while (str[i] |= '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
