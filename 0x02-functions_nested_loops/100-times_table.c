#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The times table to print
 * Return: void
 */
void print_times_table(int n)
{
int i, j, result;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j != 0)
{
printf(", ");
if (result < 10)
printf("  ");
else if (result < 100)
printf(" ");
}
printf("%d", result);
}
printf("\n");
}
}
}
