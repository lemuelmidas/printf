#include  "main.h"

/**
 * _printf - a function that produces output according to a format
 * @format: The format's string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int format_size;
	va_list args;

	if (format == NULL)
		return (-1);

	format_size = _strlen(format);
	if (format_size <= 0)
		return (0);

	va_start(args, format);
	format_size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (format_size);
}
