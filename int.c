#include "main.h"

/**
 * print_integer - a function to print a number in base 10
 * @list: Number to print in base 10
 *
 * Return: the numbers length in decimal
 **/
int print_integer(va_list list)
{
	char *p_buff;
	int length;

	p_buff = itoa(va_arg(list, int), 10);

	length = print((p_buff != NULL) ? p_buff : "NULL");

	return (length);
}
