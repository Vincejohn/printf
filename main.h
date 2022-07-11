#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp - tp
 * @f - function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);

#endif /* MAIN_H */
