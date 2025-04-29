#include <stdio.h>
#include "main.h"

/**
 * print_rev - This function print a string in a reversed
 *
 * @s: string to be reversed.
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
