#include "main.h"

/**
 * print_chessboard - prints chessboard.
 *
 * @a: rows.
 * Return: nothing.
 */
void void print_chessboard(char (*a)[8])
{
	int bsd, bod;

	for (bsd = 0; bsd < 8; bsd++)
	{
		for (bod = 0; bod < 8; bod++)
		{
			_putchar(a[bsd][bod]);
		}
		_putchar('\n');
	}
}
