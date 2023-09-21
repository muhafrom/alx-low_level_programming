#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;
/* Find the end of the dest string */
while (dest[i] != '\0')
{
i++;
}
/* Append src string to dest string */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
/* Add terminating null byte */
dest[i] = '\0';
return (dest);
}
