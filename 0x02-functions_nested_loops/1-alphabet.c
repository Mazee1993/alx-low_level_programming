#include "main.h"

/**
 * main -  prints the alphabet, in lowercase, followed by a new line.
 * Return: void
 */

void print_alphabet(void)
{
	char i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
