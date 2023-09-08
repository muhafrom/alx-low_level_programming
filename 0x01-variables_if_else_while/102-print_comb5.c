#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
for (char i = '0'; i <= '9'; ++i)
{
for (char j = '0'; j <= '9'; ++j)
{
for (char k = '0'; k <= '9'; ++k)
{
for (char l = '0'; l <= '9'; ++l)
{
putchar(i);
putchar(j);
putchar(' ');
putchar(j);
putchar(l);
if (i == j && j == k && k == l && l == '9')
break;
putchar(',');
putchar(' ');
}
}
}
}
}
