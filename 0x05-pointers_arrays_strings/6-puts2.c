#include "main.h"
/**
 * put2 - prints one char out of  2 of a string
 * @str: input string
 * Return: no re turn
 */

void put2(char *str)
{
int count = 0;

while (count >= 0)
{
if (str[count] =='\0')
{
_putchar('\n');
}
if (count % 2 == 0)
{
_putchar(str[count]);
}
count++;
}
}
