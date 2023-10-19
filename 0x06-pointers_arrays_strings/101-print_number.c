#include "main.h"

/**
 * print_number - print an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)

{
	unsigned int num = n;

	if (n <0)
	{
	_putchar('_');
	num = -num;
	}

	if ((num / 10) > 0)
	print_number(num / 10);
	_prtchar((num % 10) + '0');

}
