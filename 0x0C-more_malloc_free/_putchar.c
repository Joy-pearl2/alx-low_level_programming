#include <unistd.h>

/**
 * _putchar - write the char c to sdtout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned, and err no is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
