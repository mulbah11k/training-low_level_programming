#include <stdio.h>
#include "main.h"

/**
 * puts_half - function that print half of the given string
 *
 * @str: Given string.
 */

void puts_half(char *str)
{
	int len;
	int i = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	while (i < len)
	{
		if (i >= len * 0.5)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
