#include "main.h"

/**
 *factorial - returns the factorial of a give number
 *@n: the number to find the factorial of
 *
 *Return: if n > 0 - the factorial of n
 *        if n < 0 - 1 to indicate an error
 */
int factorial(int n)
{
int result = n;
if (n < 0)
{
return (-1);
}
else if (n >= 0 && n <= 1)
{
return (1);
}
else
{
for (int i = 1; i <= n; i++)
{
int fact *= i;
}
return (fact);
}
}
