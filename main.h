#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The function associated.
 */
typedef struct fmt fmt_t;

int _printf(const char *format, ...);
<<<<<<< HEAD
int handle_print(const char *fmt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Funtions to print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Functions to print numbers */
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexa(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funcion to print memory address */
int print_pointer(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsgnd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);

long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);
=======
void print_char(va_list valist);
void print_int(va_iilist valist);
void print_float(va_list valist);
void print_string(va_list valist);
void _write_buffer(char *buffer, int *index);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
char *itos(char str[], long int num);
char *utos(char str[], int num);
int num_len(int num);
int float_len(double f);
void format_i(va_list valist, char *buffer, int *index);
void format_u(va_list valist, char *buffer, int *index);
void format_perc(va_list valist, char *buffer, int *index);
void format_p(va_list valist, char *buffer, int *index);
void format_lx(va_list valist, char *buffer, int *index);
char *tostring(char str[], int num);
int num_len(int num);
void reset_buffer(char buffer[]);
void *rot13(char *s);
void rev_string(char *s);
void format_h(va_list valist, char *buffer, int *index);
void format_ch(va_list valist, char *buffer, int *index);
void format_o(va_list valist, char *buffer, int *index);
void format_b(va_list valist, char *buffer, int *index);
void format_r(va_list valist, char *buffer, int *index);
void format_R(va_list valist, char *buffer, int *index);
int _putchar(char c);
>>>>>>> 3c8179d8336c0cdd963726c361ebedbfa271c8d6

#endif /* MAIN_H */
