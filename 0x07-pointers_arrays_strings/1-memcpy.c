#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area n times.
 * @src: memory area
 * @dest: memory destination
 * @n: the amount of memory area to be copies
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

