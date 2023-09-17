#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len2;
	int len;
	unsigned int ui;
	void *addr;

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length:[%d, %i]\n", 50, len);
	printf("Length:[%d, %i]\n", 50, len2);
	_printf("Negative:[%d]\n", -1);
	printf("Negative:[%d]\n", -1);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf('\0');
	printf('\0');
	_printf("Character:[%c]\n", 'p');
	printf("Character:[%c]\n", 'p');
	len2 = printf("String:[%s]\n", NULL);
	len =  _printf("String:[%s]\n", NULL);
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	_printf("Percent:[%s]\n", "damn");
	 printf("Percent:[%s]\n", "damn");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return ((0));
}
