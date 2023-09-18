#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * Return: Always 0.
 */
int main(void)
{
int sum = 0;
int diff;
char c;
srand(time(NULL));
while (sum <= 2645)
{
c = rand() % 128;
sum += c;
printf("%c", c);
}
diff = sum - 2772;
printf("%c", c - diff);
return (0);
}
