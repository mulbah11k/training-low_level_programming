#include "main.h"

/**
 * string_toupper - Converts all lowercase letters to uppercase
 * @str: The string to modify
 *
 * Return: Pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}

	return (str);
}
