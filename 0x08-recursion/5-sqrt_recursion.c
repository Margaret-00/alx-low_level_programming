#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: input
 * Return: the square root of n, or -1 if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
    return (_sqrt(n, 1));
}

/**
 * _sqrt - Function that calculates the natural square root of a number.
 * @n: number to find the square root of
 * @i: current value to check
 * Return: the square root of n, or -1 if it doesn't have a natural square root.
 */
int _sqrt(int n, int i)
{
    int result = i * i;

    if (result > n)
        return (-1);

    if (result == n)
        return i;

    return _sqrt(n, i + 1);
}
