#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>
/**
 * _printf -  produces output according to a formate
 * @format: pointer to formate string.
 * Return: integer.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			len++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case 's':
					{
						char *str = va_arg(args, char*);

						write(1, str, strlen(str));
						len = len + strlen(str);
						break;

					}
				case 'c':
					{
						char ch = va_arg(args, int);

						write(1, &ch, 1);
						len++;
						break;
					}
				case '%':
					write(1, "%", 1);
					len++;
					break;
				default:
					break;
			}
		}
		format++;
	}
	va_end(args);
	return (len);
}
