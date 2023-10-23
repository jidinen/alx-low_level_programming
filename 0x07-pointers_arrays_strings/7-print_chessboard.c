#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - prints a chessboard
 *
 *
 *@a: the array of elememts
 *
 *
 *Return: void
 *
 *
 *
 *
 */

void print_chessboard(char (*a)[8])
{
int v, x;

for (v = 0; v < 8; v++)
{
for (x = 0; x < 8; x++)
{
printf("%c", a[v][x]);
if (x == 7)
{
printf("\n");
}
}
}
}
