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
	int count = 0, divisor, temp, digit;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			count++;
			n = -n;
		}

		divisor = 1;
		temp = n;

		while (temp > 9)
		{
			divisor *= 10;
			temp /= 10;
		}

		while (divisor > 0)
		{
			digit = n / divisor;
			_putchar('0' + digit);
			count++;
			n -= digit * divisor;
			divisor /= 10;
		}
	}

	return ((count));
}
