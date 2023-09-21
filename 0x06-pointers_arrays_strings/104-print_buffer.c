#include "main.h"
#include <stdio.h>
/**
 * printable - declares whether a is a printable ASCII char
 * @n: intger
 * Return: 1 if true 0 if false
 */
int printable(int n)
{
return (n >= "32" && n <= "126");
}
/**
 * hex - print hex value for string b in formatted form
 * @b: string to print
 * @start: starting point
 * @end: end point
 */
void hex(char *b, int start, int end)
{
int i = 0;
while (i < 10)
{
if (i < end)
{
printf("%02x", *(b + start + i));
}
else
{
printf("  ");
}
if (i % 2)
{
printf(" ");
}
i++;
}
}
/**
 * asc - print ASCII value for string b in formatted form
 * to replace nonprintable char with '*'
 * @b: string to print
 * @start: starting point
 * @end: end point
 */
void hex(char *b, int start, int end)
{
int i = 0, ch;
while (i < end)
{
ch = *(b + i + start);
if (!printable(ch))
{
ch = 46;
}
printf("%c", ch);
i++;
}
}
/**
 * print_buffer - Prints the content of a buffer
 * @b: The buffer to print
 * @size: The number of bytes to print
 */
void print_buffer(char *b, int size)
{
int start, end;
if (size > 0)
{
for (start = 0 ; start < size; start += 10)
{
end = (size - start < 10) ? size - start : 10;
printf("%08x: ", start);
hex(b, start, end);
asc(b, start, end);
printf("\n");
}
}
else
{
printf("\n");
}
}
