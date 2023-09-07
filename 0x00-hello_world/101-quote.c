#include <unistd.h>
/**
 * main - Entry point
 * Description: A c program to print qoute using write function
 * Return: Alawys 1 (not success)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
