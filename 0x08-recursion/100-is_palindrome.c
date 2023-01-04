#include "main.h"
/**
 *is_palindrome - determine if string is palindrome
 *@s - pointer to string
 *Return - recursion
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (pl(s, len - 1));
}
