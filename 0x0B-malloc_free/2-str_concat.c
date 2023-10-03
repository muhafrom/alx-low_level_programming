#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat_str;
int i = 0, j = 0, len1 = 0, len2 = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat_str == NULL)
{
return (NULL);
}
while (i < len1)
{
concat_str[i] = s1[i];
i++;
}
while (j <= len2)
{
concat_str[i] = s2[j];
i++;
j++;
}
return (concat_str);
}
