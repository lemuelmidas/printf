#include "main.h"


/**
<<<<<<< HEAD
 * _strlen -a program to calculate the length of a string
=======
 * _strlen - Calculate length of a string
>>>>>>> 7a2c12eaa7e79cbc93c41f9d08046a5de6f4a03f
 * @str: String
 *
 * Return: Length
 **/
int _strlen(const char *str)
{
	int l;

	for (l = 0; str[l] != 0; l++)
		;

	return (l);
}

/**
 * print - a program to print char.
 * @str: string.
 *
 * Return: length of string
 */

int print(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; ++c)
		_putchar(str[c]);

	return (c);
}
