#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf_str - print string.
 *@args: pointer to entry arguments.
 *Return: string
 */
char* _printf_str(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		return (("null"));
	}
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
	}
	return (string);
}
