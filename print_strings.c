#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_str - prints a str someway
 * @str: the string
 * Return: the number of chars printed
 */
int print_str(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += print_hexadecimal(str[i], 'X', 1);
		}
		else
		{
			count += _putchar(str[i]);
		}
	}
	return ((count));
}

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 * Return: the number chars printed
 */
int print_rev(char *s)
{
	int i, len = 0, count = 0;

	while (s[len])
		len++;

	for (i = len - 1; i > -1; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}

/**
 * rot13 - encodes a string in rot13
 * @s: the string
 * Return: the encoded string
 */
int rot13(char *s)
{
	int i, mag, j;
	char t[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int m[] = {97, 65};

	i = 0;
	while (s[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == t[j])
			{
				mag = m[(j + 1) / 26];
				_putchar(((s[i] + 13 - mag) % 26) + mag);
				break;
			}
		}
		i++;
	}
	return ((i));
}
