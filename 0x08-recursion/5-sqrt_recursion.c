#include "main.h"
/**
 * _sqrt_check - checks for the square root of c
 * @i: guess at sqrt
 * @n: number to find sqrt of
 * Return: -1 or sqrt of c
 */
int _sqrt_check(int i, int n)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (_sqrt_check(i + 1, n));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
if (n < 0)
{
return (-1);
}
return (_sqrt_check(1, n));
}
