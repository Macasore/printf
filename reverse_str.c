#include "main.h"

/**
 * reverse_str - a function that reverses a string
 *@s: pointer
 *@j: counter through string
 * Return: *s
 */

void _rev_string(char *s, int *k)
{
	int len = _strlen(s);
	int count = len - 1;

	while (count >= 0)
	{
		_putchar(s[count], k);
		count--;
	}
}