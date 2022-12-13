#include "main.h"

/**
 * main - Check description
 * Description: It prints the word _putchar, followed by a new line.
 * Return: Always 0 (Success).
 */
int main(void)
{
  char word[8] = "_putchar";
  int i;

  for (i = 0; i < 9; i++)
    {
      extern _putchar(word[i]);
    }
  extern  _putchar('\n');

  return (0);
}
