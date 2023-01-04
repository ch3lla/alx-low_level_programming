#include "main.h"

/**
 *_sqrt_recursion - evaluate function sqrt
 *@n: integer
 *Return: evaluate sqrt
 */
int _sqrt_recursion(int n)
{
int root = 0;
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
return (find_sqrt(n, root));
}
}
