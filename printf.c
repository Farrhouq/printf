#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - produces output according to format
 * @format: character string format
 * Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, acs = 0, cur;
	char *str;
	int count = 0;
	va_list params;

	if (format == NULL)
		return (-1);

	va_start(params, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i - 1] != '%')
		{
			acs = 1;
			continue;
		}

		if (acs == 0)
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			switch (format[i])
			{
			case 'c':
				cur = va_arg(params, int);
				_putchar(cur);
				count++;
				break;

			case 's':
				str = va_arg(params, char *);
				count += _puts(str);
				break;

			case 'd':
				cur = va_arg(params, int);
				count += print_number(cur);
				break;

			case 'i':
				cur = va_arg(params, int);
				count += print_number(cur);
				break;

			case '%':
				_putchar('%');
				count++;
				break;

			default:
				_putchar(format[i - 1]);
				_putchar(format[i]);
				count += 2;
				break;
			}
			acs = 0;
		}
	}

	va_end(params);
	
	return (count);
}