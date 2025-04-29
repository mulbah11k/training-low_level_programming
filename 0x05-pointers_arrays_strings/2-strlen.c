#include <stdio.h>
#include "main.h"

/**
 * _strlen - This function calculate the length of a string
 *
 * @s: string that will be pass
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int check = 0;

	while (s[check] != '\0')
	{
		check++;
	}
	return (check);
}
