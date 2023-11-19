#include "monty.h"
#include <stdarg.h>

/**
 * Perror - Prints an error message and then exit
 * @format: The string format
 * @...: The string format parameters
 *
 * Description: Prints message on stderr and exit with status EXIT_FAILURE
 */

void Perror(const char *foramt, ...)
{
	va_list args;

	va_start(args, format);

	vfprintf(stderr, format, args);

	va_end(args);

	exit(EXIT_FAILURE);
}
