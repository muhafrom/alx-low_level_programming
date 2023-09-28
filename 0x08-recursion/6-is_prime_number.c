#include "main.h"
/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor
 * Return: 1 if the number is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
if (n == i)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (check_prime(n, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to check
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (check_prime(n, 2));
}
