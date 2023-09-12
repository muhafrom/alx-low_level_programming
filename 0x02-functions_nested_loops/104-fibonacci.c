#include <stdio.h>
/**
 * numLength - returns the length of string
 * @num: operand number
 * Return: number of digits
*/
int numLength(int num)
{
int length = 0;
if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
length += 1;
}
return (length);
}
/**
* main - Entry point
* Description: prints the first 98 Fibonacci numbers starting with 1 and 2
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
int count, initialOs;
unsigned long fl = 1, f2 = 2, sum, mx = 100000000, f10 = 0, f20 = 0, sumo = 0;
for (count = 1; count <= 98; count++)
{
if (f10 > 0)
{
printf("%lu", f10);
}
initialOs = numLength(mx) - 1 - numLength(fl);
while (f10 > 0 && initialOs > 0)
{
printf("%d", 0);
initialOs--;
}
printf("%lu", fl);
sum = (fl + f2) % mx;
sumo = f10 + f20 + ((fl + f2) / mx);
fl = f2;
f10 = f20;
f2 = sum;
f20 = sumo;
if (count != 98)
printf(", ");
else
printf("\n");
}
return (0);
}
