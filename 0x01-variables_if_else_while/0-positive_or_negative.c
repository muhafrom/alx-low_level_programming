#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Assigns a random number to the variable n each time it is executed
 * and prints whether the number stored in the variable n is positive or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator with the current time */
    srand(time(0));

    /* Generate a random number and assign it to n */
    n = rand() - RAND_MAX / 2;

    /* Print the value of n */
    printf("The number %d ", n);

    /* Check if n is positive, zero, or negative */
    if (n > 0)
        printf("is positive\n");
    else if (n == 0)
        printf("is zero\n");
    else
        printf("is negative\n");

    return (0);
}
