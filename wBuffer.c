#include "main.h"
#include <stdio.h>

/**
 * _write_buffer - function that initializes and writes a buffer
 * @buffer: buffer size
 */

void _write_buffer(char *buffer, int *index)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
	buffer[i] = 0;
	(void)index;
	index[i] = 0;
}
