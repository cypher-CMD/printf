#include "main.h"

/**
 * printtxt_nums - prints an integer
 * @num: param
 * Return: int
 */

int printtxt_nums(int num)
{
int len;
unsigned int exponent, intger, remainder, i;

i = num;

if (num < 0)
{
i = -num;
_putchar('-');
}
len = int_length(i);
exponent = get_exponent(len);

while (exponent > 0)
{
intger = i / exponent;
_putchar(intger + 48);
remainder = i - (intger * exponent);
exponent = exponent / 10;

if (remainder < exponent)
{
_putchar('0');
exponent = exponent / 10;
}
i = remainder;
}

return (len);
}
