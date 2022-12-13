#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10()
{
  int n, co;

  co = 0;

  while (co < 10)
    {
      for (n = 'a'; n <= 'z'; n++)
	{
	  _putchar(n);
	}
      co++;
      _putchar('\n');
    }
}

int main(void)
{
  print_alphabet_x10();
  return (0);
}
