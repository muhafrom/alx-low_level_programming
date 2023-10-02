#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful, 1 otherwise
 */
int main(int argc, char *argv[])
{
int i, sum = 0;
for (i = 1; i < argc; i++)
{
char *arg = argv[i];
while (*arg)
{
if (*arg < '0' || *arg > '9')
{
printf("Error\n");
return (1);
}
arg++;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
