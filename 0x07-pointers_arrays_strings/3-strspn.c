#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 * @s: The input string to be scanned
 * @accept: The characters to match
 *
 * Return: The number of bytes in s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int i, found;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			break;

		length++;
		s++;
	}

	return (length);
}
