#include "main.h"
/**
 * _print_character - This prints 1 character like putcharacter
 * @arg: list of arguments
 * Return: int
 */
int _print_character(va_list arg)
{
_putcharacter(va_arg(arg, int));
return (1);
}
