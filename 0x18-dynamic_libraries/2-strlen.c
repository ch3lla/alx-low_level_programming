#include "main.h"

/**
 * _strlen - length of string
 * @s: a pointer to an int that will be changed
 *
 * Return: void
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
