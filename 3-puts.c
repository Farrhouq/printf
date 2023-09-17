#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
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
 * print_acs - prints the value of an
 * access specifier
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
		count++;
		break;

	case 's':
		str = va_arg(params, char *);
		if (str == NULL)
		{
			_putchar('(');
			_putchar('n');
			_putchar('u');
			_putchar('l');
			_putchar('l');
			_putchar(')');
			count += 6;
		}
		else
		{
			count += _puts(str);
		}
		break;

	case 'd':
		cur = va_arg(params, int);
		count += print_number(cur);
		break;

	case 'i':
		cur = va_arg(params, unsigned);
		count += print_number(cur);
		break;

	case '%':
		_putchar('%');
		count++;
		break;

	default:
		_putchar(prev);
		_putchar(format);
		count += 2;
		break;
	}
	return (count);
}
