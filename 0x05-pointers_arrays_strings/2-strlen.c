#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: input strength
 *
 * return: string length
 */
int _strlen(char *s)
{
	int index;
	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}