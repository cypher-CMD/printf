#include "main.h"

/**
 * _putcharacter - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcharacter(char c)
{
return (write(1, &c, 1));
}