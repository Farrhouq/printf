#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 * Return: the number of characters printed
 */
int _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_null - print '(null)'
 * Return: 6 always
 */
int print_null(void)
{
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
	return (6);
}

/**
 * print_acs - prints the value of an
 * access specifier
 * @format: the type of specifier
 * @prev: the previous char
 * @params: the arguments list
 * Return: the number of chars printed
 */
int print_acs(char format, char prev, va_list params)
{
	char cur, *str;
	int count = 0;

	switch (format)
	{
	case 'c':
		cur = va_arg(params, int);
		_putchar(cur);
		return (1);
	case 's':
		str = va_arg(params, char *);
		if (str == NULL)
			count += print_null();
		else
			count += _puts(str);
		break;
	case 'd':
	case 'i':
		cur = va_arg(params, int);
		return (print_number(cur));
	case 'S':
		str = va_arg(params, char *);
		return (print_str(str));
	case 'r':
		str = va_arg(params, char *);
		return (print_rev(str));
	case 'R':
		str = va_arg(params, char *);
		return (rot13(str));
	case '%':
		_putchar('%');
		return (1);
	default:
		_putchar(prev);
		_putchar(format);
		return (2);
	}
	return (count);
}


/**
 * print_number - prints any integer
 * @n: number to be printed
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

	return (count);
}


int printDecimalToBinary(int n)
{
	int count = 0;
	int i = 0, j;
	int binary[32];

	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}


	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}

	return (count);
}
