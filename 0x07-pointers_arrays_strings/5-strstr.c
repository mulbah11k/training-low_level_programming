#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string to search in
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}

