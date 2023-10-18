#include <stdio.h>
#include <unistd.h>
/**
 * _printf_unknown - print characters.
 *@args: pointer to entry arguments.
 *Return: integer.
 */
int _printf_unknown(va_list args)
{
	write(1, "%", 1);
	write(1, args, 1);
	return (2);
}
