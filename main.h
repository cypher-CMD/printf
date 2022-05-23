#ifndef MAIN_H

#define MAIN_H



#include <stdlib.h>

#include <stdarg.h>



/**

 * struct flags - struct containing flags to "turn on"

 * when a flag specifier is passed to _printf()

 * @plus: flag for the '+' character

 * @space: flag for the ' ' character

 * @hash: flag for the '#' character

 */

typedef struct flags

{

    int plus;

    int space;

    int hash;

} flags_t;



/**

 * struct printHandler - struct to choose the right function depending

 * on the format specifier passed to _printf()

 * @c: format specifier

 * @f: pointer to the correct printing function

 */

typedef struct printHandler

{
<<<<<<< HEAD

    char c;

    int (*f)(va_list ap, flags_t *f);

} ph;



/* print_nums */

int print_int(va_list l, flags_t *f);

void print_number(int n);

int print_unsigned(va_list l, flags_t *f);

int count_digit(int i);



/* print_bases */

int print_hex(va_list l, flags_t *f);

int print_hex_big(va_list l, flags_t *f);

int print_binary(va_list l, flags_t *f);

int print_octal(va_list l, flags_t *f);



/* converter */

char *convert(unsigned long int num, int base, int lowercase);



/* _printf */

int _printf(const char *format, ...);



/* get_print */

int (*get_print(char s))(va_list, flags_t *);



/* get_flag */

int get_flag(char s, flags_t *f);



/* print_alpha */

int print_string(va_list l, flags_t *f);

int print_char(va_list l, flags_t *f);



/* write_funcs */

int _putchar(char c);

int _puts(char *str);



/* print_custom */

int print_rot13(va_list l, flags_t *f);

int print_rev(va_list l, flags_t *f);

int print_bigS(va_list l, flags_t *f);



/* print_address */

int print_address(va_list l, flags_t *f);



/* print_percent */

int print_percent(va_list l, flags_t *f);





#endif
=======
	char *id;
	int (*func)(va_list);
};

typedef struct format f_id;

int _printf(const char *format, ...);
int _identifier(const char *format, f_id func_list[], va_list args);
int _putchar(char c);
int _putstr(va_list);
int _print_char(va_list arg);
int _print_percent(va_list arg);
int print_number(int n);
int _print_int(va_list arg);
int int_length(unsigned int n);
int get_exponent(int len);
int _print_binary(va_list);
int binary_len(unsigned int n);
char *rev_string(char *);
void _putbase(char *str);
char *_cpymem(char *dest, char *src, unsigned int n);
#endif
>>>>>>> fe44354a4f924a43674f9319f5b2fcaa80823455
