#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
int l;
for (i = 0; i <= 9; ++i)
{
for (j = 0; j <= 9; ++j)
{
for (k = 0; k <= 9; ++k)
{
for (l = 0; l <= 9; ++l)
{
putchar(i + '0');
putchar(j) + '0';
putchar(' ');
putchar(j + '0');
putchar(l '0');
if (i == j && j == k && k == l && l == '9')
break;
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
