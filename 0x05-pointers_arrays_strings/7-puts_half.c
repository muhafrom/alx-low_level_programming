#include "main.h"
/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
int length = 0;
int i;
/* get the length of the string */
while (str[length] != '\0')
{
length++;
}
/* start from the middle of the string */
i = (length % 2 == 0) ? length / 2 : (length - 1) / 2 + 1;
/* print the second half of the string */
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
