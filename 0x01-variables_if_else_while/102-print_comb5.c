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
for (i = 0; i <= 99; i++) {
for (j = i; j <= 99; j++) {
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
putchar(',');
putchar(' ');
}
}
return (0);
}
