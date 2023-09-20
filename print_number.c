#include "main.h"

/**
 * print_number - prints any integer
 * @n: number to be printed
 * Return: the number of chars printed
 */
int print_number(int n)
{	int count = 0, divisor = 1, digit;
	if (n == 0)
	{	_putchar('0');
		return (1); }
	if (n < 0)
	{	_putchar('-');
		count++;
		n = -n; }
	while (n / divisor >= 10)
		divisor *= 10;
	while (divisor > 0)
	{	digit = n / divisor;
		_putchar('0' + digit);
		count++;
		n -= digit * divisor;
		divisor /= 10; }
	return (count); }
