#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the memory with a constant byte (b) n times.
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the char that will fill the memory
 *
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
