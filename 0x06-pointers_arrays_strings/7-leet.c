#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}
return (s);
}
