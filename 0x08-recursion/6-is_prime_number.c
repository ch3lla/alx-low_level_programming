#include "main.h"

/**
 *is_prime_number - determines if a number is a prime number
 *@n: integer
 *Return: 1 for prime number
 *        0 for non prime number
 */
int is_prime_number(int n)
{
int num = n / n;
if (n <= 1)
{
return (0);
}
if (num)
{
num = 1;
return (1);
}
else
{
return (0);
}
}
