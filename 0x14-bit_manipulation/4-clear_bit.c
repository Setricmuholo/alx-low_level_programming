#include "main.h"

/**
 * clear_bit - function that sets the value of
 *             a bit to 0 at a given index
 * @n: pointer to binary
 * @index: index starting from to value of bit
 *         of your choice
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
