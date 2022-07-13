#include "main.h"

/**
 * _rev_string - reverses a string
 *@s: char pointer
 *@k: counter through string
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


