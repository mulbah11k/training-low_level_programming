#include <stdio.h>
#include "main.h"

/**
 * _puts - This function print a given string
 *
 * @str: The string that will be print out.
 */
void _puts(char *str)
{
	int check = 0;

	while (str[check] != '\0')
	{
		_putchar(str[check]);
		check++;
	}
	_putchar('\n');
}
