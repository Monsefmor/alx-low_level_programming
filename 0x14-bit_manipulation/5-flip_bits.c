// This program counts the number of bits to change to get from one number to another
#include "main.h"

// This function counts the number of bits to change
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int countbit = 0;
	// The exclusive is the result of bitwise XOR operation between n and m
	unsigned long int exclusive = n ^ m;

	// Loop through all the bits of exclusive
	while (exclusive > 0)
	{
		// If the least significant bit is 1, increment the count
		if (exclusive & 1)
			countbit++;
		// Right shift the exclusive by 1 bit
		exclusive >>= 1;
	}

	return countbit;
}
