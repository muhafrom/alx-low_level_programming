#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * wordlen - calculates the length of a word
 * @str: string
 * Return: length of the word
 */
int wordlen(char *str)
{
int len = 0;
while (*(str + len) && *(str + len) != ' ')
{
len++;
}
return (len);
}
/**
 * wordcount - counts the number of words in a string
 * @str: string
 * Return: number of words
 */
int wordcount(char *str)
{
int count = 0, inword = 0;
while (*str)
{
if (*str != ' ')
{
str += wordlen(str);
inword = 0;
}
else
{
str++;
if (inword == 0)
{
count++;
inword = 1;
}
}
}
return (count);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of words (strings)
 */
char **strtow(char *str)
{
char **words;
int wc, i, j, wl;
if (str == NULL || !*str)
{
return (NULL);
}
wc = wordcount(str);
if (wc == 0)
{
return (NULL);
}
words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
for (i = 0; i < wc; i++)
{
while (*str == ' ')
{
str++;
}
wl = wordlen(str);
words[i] = malloc((wl + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
{
free(words[--i]);
}
free(words);
return (NULL);
}
for (j = 0; j < wl; j++)
{
words[i][j] = str[j];
}
words[i][j] = '\0';
str += wl;
}
words[wc] = NULL;
return (words);
}
