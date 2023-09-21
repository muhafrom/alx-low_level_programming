#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be converted
 * Return: pointer to the converted string
 */
char *cap_string(char *s)
{
int i = 0;
int new_word = 1;
char separators[] = " \t\n,;.!?\"(){}";
while (s[i])
{
if (new_word && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
new_word = 0;
}
int j = 0;
for (j = 0; separators[j]; j++)
{
if (s[i] == separators[j])
{
new_word = 1;
break;
}
}
i++;
}
return (s);
}
