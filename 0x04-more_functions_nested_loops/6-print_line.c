#include "main.h"

/**
 * print_line - raws a straight line in the terminal.
 * @n: The number of lines to draw
 * Return: Empty
 */

void print_line(int n)
{
int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
