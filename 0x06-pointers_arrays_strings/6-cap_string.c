#include "main.h"
#include <stdio.h>
/**
 * lower - checks if a character is lowercase
 * @c: character to be checked
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int lower(char c)
{
return (c >= 'a' && c <= 'z');
}
/**
 * is - checks if a character is a delimiter
 * @c: character to be checked
 *
 * Return: 1 if the character is a delimiter, 0 otherwise
 */
int is(char c)
{
int i;
char delimiters[] = " \t\n,;.!?\"(){}";
for (i = 0; i < 12; i++)
{
if (c == delimiters[i])
{
return (1);
}
}
return (0);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be converted
 * Return: pointer to the converted string
 */
char *cap_string(char *s)
{
char *ptr = s;
int found = 1;
while (*s)
{
if (is(*s))
{
found = 1;
}
else if (lower(*s) && found)
{
*s -= 32;
found = 0;
}
else
{
found = 0;
}
s++;
}
return (ptr);
}
