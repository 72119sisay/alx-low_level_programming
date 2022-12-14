#include "main.h"

/**
 * _puts_recursion - prints a string that is followed by new line
 * @s: a string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
