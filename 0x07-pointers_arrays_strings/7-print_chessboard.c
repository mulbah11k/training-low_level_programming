#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array representing the board
 */
void print_chessboard(char (*a)[8])
{
	int m, k;

	for (m = 0; m < 8; m++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(a[m][k]);
		}
		_putchar('\n');
	}
}
