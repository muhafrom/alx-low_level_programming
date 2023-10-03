#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include main.h
int count_words(char *str);
char **strtow(char *str);
char *extract_word(char *str);
/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 * Return: The number of words
 */
int count_words(char *str)
{
int count = 0;
int word_started = 0;
while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
word_started = 0;
}
else if (word_started == 0)
{
word_started = 1;
count++;
}
str++;
}
return (count);
}
/**
 * strtow - Splits a string into words
 * @str: The input string
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int word_count, i = 0;
char *word;
if (str == NULL || *str == '\0')
{
return (NULL);
}
word_count = count_words(str);
words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
str++;
}
else
{
word = extract_word(str);
if (word == NULL)
{
for (i = 0; i < word_count; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
words[i++] = word;
str += strlen(word);
}
}
words[i] = NULL;
return (words);
}
/**
 * extract_word - Extracts a word from a string
 * @str: The input string
 * Return: Pointer to the extracted word
 */
char *extract_word(char *str)
{
int length = 0;
char *word;
char *start = str;
while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
{
length++;
str++;
}
word = malloc((length + 1) * sizeof(char));
if (word == NULL)
{
return (NULL);
}
strncpy(word, start, length);
word[length] = '\0';
return (word);
}
/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 * Return: void
 */
void print_tab(char **tab)
{
int i;
for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
char **tab;
tab = strtow("      ALX School         #cisfun      ");
if (tab == NULL)
{
printf("Failed\n");
return (1);
}
print_tab(tab);
for (int i = 0; tab[i] != NULL; i++)
{
free(tab[i]);
}
free(tab);
return (0);
}
