#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, except for q and e
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
}
putchar('\n');
return (0);
}
