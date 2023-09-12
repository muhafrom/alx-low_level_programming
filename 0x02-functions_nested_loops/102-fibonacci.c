#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, j, k, next;
i = 1;
j = 2;
printf("%ld, %ld", i, j);
for (k = 3; k <= 50; k++)
{
next = i + j;
printf(", %ld", next);
i = j;
j = next;
}
printf("\n");
return (0);
}
