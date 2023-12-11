#include <stdio.h>

// Calculates base raised to the power of exponent
unsigned long int _pow(unsigned int base, unsigned int exponent)
{
  unsigned long int result = 1;
  while (exponent--)
    result *= base;
  return result;
}

// Prints a number in binary notation
void print_binary(unsigned long int n)
{
  unsigned long int mask = _pow(2, sizeof(unsigned long int) * 8 - 1);
  int flag = 0;
  while (mask)
  {
    if (n & mask)
    {
      flag = 1;
      putchar('1');
    }
    else if (flag || mask == 1)
    {
      putchar('0');
    }
    mask >>= 1;
  }
}
