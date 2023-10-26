#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 *_sqrt_recursion - Returns the natural square root of a number.
 *@n: input
 *Return: Always 0
 */
int _sqrt_recursion(int n)
{
    return (_sqrt(n, 1));
}

/**
 *_sqrt - Function that calculates the natural square root of a number.
 *@n: number to find the square root of
 *@i: current value to check
 *Return: Always 0
 */
int _sqrt(int n, int i)
{
    int sqrt = i * i;
    if (sqrt > n)
        return (-1);
    if (sqrt == n)
        return (i);
    return (_sqrt(n, i + 1));
}
