#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: pointer to the first element of the matrix
 * @size: number of rows/columns in the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, first_sum = 0, second_sum = 0;

	for (i = 0; i < size; i++)
	{
		first_sum += a[i * size + i];
		second_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", first_sum, second_sum);
}
