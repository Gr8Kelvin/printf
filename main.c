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
	int le;
	int le2;
	unsigned int i;
	void *addr;

	le = _printf("Let's try to printf a simple sentence.\n");
	le2 = printf("Let's try to printf a simple sentence.\n");
	i = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", le, le);
	printf("Length:[%d, %i]\n", le2, le2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", i);
	printf("Unsigned:[%u]\n", i);
	_printf("Unsigned octal:[%o]\n", i);
	printf("Unsigned octal:[%o]\n", i);
	_printf("Unsigned hexadecimal:[%x, %X]\n", i, i);
	printf("Unsigned hexadecimal:[%x, %X]\n", i, i);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	le = _printf("Percent:[%%]\n");
	le2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", le);
	printf("Len:[%d]\n", le2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
