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
    
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H' );
    printf("Character:[%c]\n", 'H');
   len2 = printf("String:[%s]\n", NULL);
   len =  _printf("String:[%s]\n", NULL);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
     _printf("Percent:[%%%%%%%]\n");
     printf("Percent:[%%%%%%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    
    return (0);
}