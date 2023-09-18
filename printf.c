#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _printf - produces output according to format
 * @format: character string format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, acs = 0, count = 0, cur;
	unsigned int b;
	va_list params;

	if (format == NULL)
		return (-1);

	va_start(params, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && acs != 1)
		{
			acs = 1;
			continue;
		}
		if (acs == 0)
		{
			_putchar(format[i]);
			count++;
			continue;
		}
		if (format[i] == 'i' || format[i] == 'd')
		{
			cur = va_arg(params, int);
			count += print_number(cur);
		}
		else if (format[i] == 'b')
		{
			b = va_arg(params, usi);
			count += printDecimalToBinary(b);
		}
		else if (format[i] == 'u')
		{
			b = va_arg(params, usi);
			count += print_unsigned_number(b);
		}
		else if (format[i] == 'o')
		{
			b = va_arg(params, usi);
			count += printUnsignedIntToOctal(b);
		}
		else if (format[i] == 'x' || format[i] == 'X')
		{
			b = va_arg(params, usi);
			count += print_hexadecimal(b, format[i]);
		}
		else
		{
			count += print_acs(format[i], format[i - 1], params);
		}
		acs = 0;
	}

	va_end(params);

	return (count);
}
