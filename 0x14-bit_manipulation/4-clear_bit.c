// This program sets the value of a bit to 0 at a given index using bitwise operations
#include "main.h"
#include <stdlib.h>

// This function sets the value of a bit to 0 at a given index
int clear_bit(unsigned long int *n, unsigned int index)
{
	// If the index is out of range, return -1
	if (index > sizeof(*n) * 8)
		return (-1);
	// The n is modified by bitwise AND operation with the complement of 1 shifted left by index bits
	*n &= ~(1 << index);
	return (1);
}
