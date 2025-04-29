#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: first value to be swap
 * @b: second value to be swap
 * Return: Always 0.
 */
void swap_int (int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
