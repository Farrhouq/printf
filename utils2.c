#include "main.h"

/**
 * printUnsignedIntToOctal - prints an unsigned
 * int octal in base 8
 * @n: the integer to be printed
 * Return: the number of octal digits
*/
int printUnsignedIntToOctal(unsigned int n)
{
	int count = 0;

	int octal[32];
	int i = 0, j;

	while (n > 0)
	{
		octal[i] = n % 8;
		n = n / 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j] + '0');
		count++;
	}

	return ((count));
}


int print_unsigned_number(unsigned int n)
{
	int pow;
	int count = 0;

	pow = 1000000000;

	if (n == 0)
    {
		_putchar('0');
		count++;
		return (count);
	}

	while (pow) {
		if (((n / pow) % 10) || (n / (pow * 10)) % 10)
        {
			_putchar(((n / pow) % 10) + '0');
			count++;
		}
		pow /= 10;
	}

	return (count);
}
