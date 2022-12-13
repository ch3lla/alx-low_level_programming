#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
  int n;

  for (n = 'a'; n <= 'z'; n++)
    {
      _putchar(n);
    }
  _putchar('\n');
}
int main(void)
{
  print_alphabet();
  return (0);
}
