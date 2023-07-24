#include "main.h"

/**
 * print_octal - a function to print an unsigned octal
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p_buff;
	int length;

	p_buff = itoa(va_arg(list, unsigned int), 8);

	length = print((p_buff != NULL) ? p_buff : "NULL");

	return (length);
}
