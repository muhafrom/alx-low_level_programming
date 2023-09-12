#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, j, next, sum;
i = 1;
j = 2;
sum = 0;
while (j <= 4000000)
{
if (j % 2 == 0)
{
sum += j;
}
next = i + j;
i = j;
j = next;
}
printf("%ld\n", sum);
return (0);
}
