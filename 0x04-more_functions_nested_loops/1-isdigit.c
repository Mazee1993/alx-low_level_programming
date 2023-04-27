#include "main.h"

/**
 * _isdigit -  checks for a digit (0 through 9).
 * @x: The number to bre checked
 * Return: 1 for a character tha will be a digit or 0 for anything else
 */

int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
