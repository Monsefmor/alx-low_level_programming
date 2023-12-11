// This program sets the value of a bit to 1 at a given index using bitwise operations
#include "main.h"

// This function sets the value of a bit to 1 at a given index
int set_bit(unsigned long int *n, unsigned int index)
{
	// If the index is out of range, return -1
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	// The setbit is 1 shifted left by index bits
	unsigned long int setbit = 1 << index;
	// The n is modified by bitwise OR operation with setbit
	*n = *n | setbit;
	return (1);
}
