#include "main.h"

/**
 * leet - This function Encodes a string into 1337
 * @s: The input string
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
	char l[] = "aAeEoOtTlL";
	char c[]   = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = c[j];
				break;
			}
		}
	}

	return (s);
}
