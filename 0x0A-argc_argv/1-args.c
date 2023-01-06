#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of elements
 * @argv: array of elements
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
