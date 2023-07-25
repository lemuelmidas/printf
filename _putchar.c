#include "main.h"
#include <unistd.h>

/**
<<<<<<< HEAD
 * _putchar - a program to write the character c to stdout
 * @c: The character to print
=======
 * _putchar - writes the character c to stdout
 * @c: Character to print
>>>>>>> 7a2c12eaa7e79cbc93c41f9d08046a5de6f4a03f
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
