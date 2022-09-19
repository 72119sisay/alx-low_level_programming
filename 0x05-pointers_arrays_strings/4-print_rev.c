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
	int len = strlen(s)

	while (len--)
		Putchar(*(s + len));
	putchar(10);
}
