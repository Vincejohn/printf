#include "main.h"
/**
 * _printf - function that prints based on format specifier
 * @format: takes in format specifier
 * Return: return pointer to index
 */
int _print (const char *format, ...)
{
	char buffer[1024];
	int i, j=0, a=0, *index=&a;
	va_list valist;
	vtype_t spec[] = {
		{'c', format_c},
		{'d', format_d},
		{'s', format_s},
		{'i', format_d},
		{'u', format_u},
		{'%', format_perc},
		{'x', format_h},
		{'X', format_ch},
		{'o', format_o},
		{'b', format_b},
		{'p', format_p},
		{'r', format_r},
		{'R', format_R},
		{'\0', NULL}
	};
	
