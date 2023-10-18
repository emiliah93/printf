#include <stdio.h>
#include <unistd.h>
/**
 * _printf_percent - print characters.
 *@args: pointer to entry arguments.
 *Return: integer.
 */
int _printf_percent()
{
	return (write(1, "%", 1));
}
