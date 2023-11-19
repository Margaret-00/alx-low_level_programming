#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function that returns the sum of two numbers
 * @a: first number
 * @b: second number
 * Return: a and b sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Difference between a and b
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: first number
 * @b: second number
 * Return: multiplucation of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of the product
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the two numbers
 * @a: first number
 * @b: second number
 * Return: the remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
