#include "main.h"

/**
 * _memset - fills a memory block with a constant byte
 * @s: memory block address
 * @b: the char 
 * @n: number of bytes
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
