#include "main.h"

/**
 * reverse_str - a function that reverses a string
 *@s: pointer
 *@j: counter through string
 * Return: *s
 */

void _rev_string(char *s, int *k)
{
int l, count;
l = _string_length(s);
count = l - 1;
while (count >= 0)
{
_putchar(s[count], j);
count--;
}
}