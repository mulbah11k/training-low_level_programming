#include <stdio.h>
#include "main.h"

/**
 * _strcpy - This function is use to copy the string in src to dest.
 *
 * @dest: This is the empty string that src will be copy to.
 * @src: This is the string that will be copy in to dest.
 * Return: This return the copy string
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int check;

	for (len = 0; src[len] != '\0'; len++)
	{
	}

	for (check = 0; check < len; check++)
	{
		dest[check] = src[check];
	}
	return (dest);
}
