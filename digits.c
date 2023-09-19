#include "main.h"

int count_digits(int number)
{
	int count = 0;

	if (number == 0)
	{
		return (1);
	}

	while (number != 0)
	{
		count++;
		number /= 10;
	}

	return (count);
}


int count_binary_digits(int number)
{
	int count = 0;

	if (number <= 0)
	{
		return ((1));
	}

	while (number != 0)
	{
		number /= 2;
		count++;
	}

	return ((count));
}



int count_octal_digits(int number)
{
	int count = 0;

	if (number <= 0)
	{
		return ((1));
	}

	while (number != 0)
	{
		number /= 8;
		count++;
	}
	return ((count));
}

int count_hex_digits(int number)
{
	int count = 0;

	if (number <= 0)
	{
		return ((1));
	}

	while (number != 0)
	{
		number /= 16;
		count++;
	}
	return ((count));
}
