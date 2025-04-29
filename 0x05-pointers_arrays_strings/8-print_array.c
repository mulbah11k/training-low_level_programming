#include <stdio.h>
#include "main.h"

/**
 * print_array - This function print the n elements of an array
 *
 * @a: The given array to will be print.
 * @n: The number of items.
 */

void print_array(int *a, int n)
{
	int check = 0;

	while (check < n)
	{
		printf("%d", a[check]);
		if (check < n - 1)
			printf(",");
		printf(" ");
		check++;
	}
	putchar('\n');
}
