#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _puts(char *str);

int print_number(int n);
int print_acs(char format, char prev, va_list params);
int print_null(void);
int printDecimalToBinary(int n);
int printUnsignedIntToOctal(unsigned int n);
int print_unsigned_number(unsigned int n);
int print_hexadecimal(unsigned int n, char formatSpecifier, int pad);
int print_str(char *str);
int print_rev(char *s);
int rot13(char *s);
int print_boux(unsigned int n, char format);

typedef unsigned int usi;

#endif
