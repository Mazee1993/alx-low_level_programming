#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: The string to print
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\n'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}

