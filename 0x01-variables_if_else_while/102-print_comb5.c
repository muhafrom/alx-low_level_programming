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
for (i = 0; i <= 99; i++)
{
for (j = i + 1; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i == 98 && j == 99)
{
break;
}
putchar(',');
putchar(' ');
}
}
return (0);
}
