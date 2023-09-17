#include "main.h"
#include <stdio.h>

/**
 * print_number - prints any integer
 * @n: number to be printed
 * @count: the number of chars
 * Return: the number of chars printed
 */

int print_number(int n)
{
	int pow;
	int count;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	pow = 1000000000;
	count = 0;
	while (pow)
	{
		if (((n / pow) % 10) || (n / (pow * 10)) % 10)
		{
			_putchar(((((n / pow)) % 10) + '0'));
			count++;
		}
		pow /= 10;
	}

	return (count);
}