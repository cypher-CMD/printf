#include "main.h"

/*
 * File: _printfx.c
 * Authors: [Onyedikachi Onu](https://github.com/St-Pardon) and
 * [Raji R.Yewand](https://github.com/wandexdev).
 * Desc: Performs formatted output conversion and Print Data
 */

/**
 * _printfx - output value to stdio
 * @format: param
 * Return: int
 */

int _printfx(const char *format, ...)
{
int len = 0;
f_id func_list[] = {/*pairing the format id to a handling function*/
{"c", _print_character},
{"s", _putstrng},
{"%", _print_percent},
{"d", _print_int},
{"i", _print_int},
{"b", _print_binary},
{NULL, NULL}
};
va_list args;

if (!format)
return (-1); /*falsy value used to check if format is empty*/

va_start(args, format);
/* cleaned up not to exceed 40line requirements,*/
/* identified function created*/

len = _identifier(format, func_list, args);
va_end(args);
return (len);
}


/**
 * _identifier - marches id to functions
 * @format: param
 * @func_list: param
 * @args: param
 * Return: int
 */

int _identifier(const char *format, f_id func_list[], va_list args)
{
int i, j, len = 0;

if (!format)
return (-1); /*falsy value used to check if format is empty*/

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{/*if %, we loop throught the stuct list above*/
for (j = 0; func_list[j].id != NULL; j++)
{
if (format[i + 1] == func_list[j].id[0])
{
len += func_list[j].func(args);
break;
}
}
i++;
}
else
{
_putcharacter(format[i]);
len++;
}

}
return (len);
}
