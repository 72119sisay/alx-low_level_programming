#include "main.h"

/**
 * _strlen - a function which returns the length of a string
 *
 * @s: string input
 *
 * Return: String lenngth 
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
