#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @k: The number to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int last_digit = k % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
