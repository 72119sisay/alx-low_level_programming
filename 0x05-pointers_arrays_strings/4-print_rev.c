#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - a function that prints a reverse string
*@s: this is the input string
*Return: Nothing
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (index = index - 1; s[index] != '\0'; index--)
	{
		_Putschar(s[index]);
	}
	_putschar('\n');
}
