#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy from src
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* Copy n bytes of src string to dest string */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
/* If src has less than n bytes, fill the rest with null bytes */
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
