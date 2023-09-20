#include "main.h"

/**
 * count_digits - counts the digits of a number
 * @number: the number
 * Return: the number of digits
*/
int count_digits(int number)
{
	int count = 0;

	if (number == 0)
	{
		return ((1));
	}

	while (number != 0)
	{
		count++;
		number /= 10;
	}

	return ((count));
}

/**
 * count_binary_digits - counts the binary digits
 * of a number
 * @number: the number
 * Return: the number of binary digits of the number
*/
int count_binary_digits(int number)
{
	int count = 0;

	if (number <= 0)
	{
		return (((1)));
	}

	while (number != 0)
	{
		number /= 2;
		count++;
	}
	return (count);
}

/**
 * count_octal_digits - counts the octal digits
 * @number: the number
 * Return: the octal digits count
*/
int count_octal_digits(int number)
{
	int count = 0;

	if (number <= 0)
	{
		return (((1)));
	}

	while (number != 0)
	{
		number /= 8;
		count++;
	}
	return (((count)));
}

/**
 * count_hex_digits - counts the hex digits
 * @number: the number
 * Return: the number of hex digits
*/
int count_hex_digits(int number)
{
	int count = 0;

	if (number <= 0)
	{
		return (((1)));
	}

	while (number != 0)
	{
		number /= 16;
		count++;
	}
	return (((count)));
}

/**
 * printDecimalToBinary - prints a decimal in binary
 * @n: the decimal number
 * Return: the number of binary digits
*/
int printDecimalToBinary(int n)
{
	int count = 0, i = 0, j, binary[32];

	if (n == 0)
	{
		_putchar('0');
		count++;
		return (count); }
	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++; }
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	} return (count); }
