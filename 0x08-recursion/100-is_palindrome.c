#include "main.h"
/**
 * str_len - returns the length of a string
 * @s: string to calculate length of
 * Return: length of the string
 */
int str_len(char *s)
{
if (*s)
{
return (1 + str_len(s + 1));
}
else
{
return (0);
}
}
/**
 * check_palindrome - checks if a string is a palindrome
 * @s: string to check
 * @len: length of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len)
{
if (len <= 1)
{
return (1);
}
else if (*s == *(s + len - 1))
{
return (check_palindrome(s + 1, len - 2));
}
else
{
return (0);
}
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = str_len(s);
return (check_palindrome(s, len));
}
