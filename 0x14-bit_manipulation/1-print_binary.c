// This program prints a number in binary notation using bitwise operations
#include "main.h"

// This function calculates (base ^ power) using a loop
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num = 1;
	for (unsigned int a = 0; a < power; a++)
		num *= base;
	return (num);
}

// This function prints a number in binary notation using a flag variable
void print_binary(unsigned long int n)
{
	char flag = 0;
	// The divisor is the largest power of 2 that fits in an unsigned long int
	unsigned long int divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor > 0)
	{
		// The check is the result of bitwise AND operation between n and divisor
		unsigned long int check = n & divisor;
		if (check == divisor) // If check is equal to divisor, print 1 and set flag to 1
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1) // If flag is 1 or divisor is 1, print 0
		{
			_putchar('0');
		}
		divisor >>= 1; // Right shift the divisor by 1 bit
	}
}
}
