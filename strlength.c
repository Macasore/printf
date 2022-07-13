#include "main.h"
/**
 * strlen - calculate length of a string
 *@s: char pointer
 * Return: length
 */

int strlen(char *s)
{
char *cp = s;
int l = 0;

while (*cp != '\0')
{
l++;
cp++;
}
return (l);
}
