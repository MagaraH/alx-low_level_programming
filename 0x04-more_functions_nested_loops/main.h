#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>

int _putchar(char c)
{
		return (write(1, &c, 1));
}

int _isupper(int c);

int _isdigit(int c);

void print_numbers(void);

int mul(int a, int b);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

#endif
