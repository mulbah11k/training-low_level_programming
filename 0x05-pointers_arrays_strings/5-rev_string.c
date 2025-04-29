#include <stdio.h>
#include "main.h"

/**
 * print_rev - This function print a string in a reversed
 *
 * @s: string to be reversed.
 */

void rev_string(char s[])
{
	int len;
	int len2;
	for (len = 0; s[len] != '\0'; len++)
	{
	}
	len2 = len;
	char s2[len];
	while (len2 > 0)
	{
		char s2[len2] = s[len2];
		printf("%c", s2[len2]);
		len2--;
	}
/*	while (check < len)
	{
		s[check] = s2[check];
		check++;
	}*/
}
