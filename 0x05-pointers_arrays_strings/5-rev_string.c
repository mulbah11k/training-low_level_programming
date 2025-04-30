#include <stdio.h>
#include "main.h"

/**
 * rev_string - This function update a string in reversed other.
 *
 * @s: string to be reversed.
 */

void rev_string(char *s)
{
	int len = 0;
	int len2 = 0;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	len--;

	while (len2 < len)
	{
		temp = s[len2];
		s[len2] = s[len];
		s[len] = temp;
		len2++;
		len--;
	}
}
