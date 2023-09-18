#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer to the string
 * Return: void
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;
/* get the length of the string */
while (s[length] != '\0')
{
length++;
}
/* reverse the string */
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
