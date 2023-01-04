#include "main.h"

/**
 *_sqrt_recursion - evaluate function sqrt
 *@n: integer
 *Return: evaluate sqrt
 */
int _sqrt_recursion(int n)
{
if (n < 1)
{
return (-1);
}
if (n == 1)
{
return (1);
}
else
{
return (_sqrt_recursion(n));
}
}
