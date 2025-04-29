#include <stdio.h>
#include "main.h"

/**
 * puts2 - This function print other char like (0,2,4,6..) or (a,c,e,g..)
 *
 * @str: string that will be print in other
 */
void puts2(char *str)
{
	int check = 0;

	while (str[check] != '\0')
	{
		_putchar(str[check]);
		check += 2;
	}
	_putchar('\n');
}
