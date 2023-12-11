// This program returns the value of a bit at a given index using bitwise operations
#include "main.h"

// This function returns the value of a bit at a given index
int get_bit(unsigned long int n, unsigned int index)
{
	// If the index is out of range, return -1
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	// The divisor is 2 raised to the power of index
	unsigned long int divisor = 1 << index;
	// The check is the result of bitwise AND operation between n and divisor
	unsigned long int check = n & divisor;
	// If check is equal to divisor, return 1, otherwise return 0
	return (check == divisor) ? 1 : 0;
}
