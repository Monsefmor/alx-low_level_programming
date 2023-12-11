#include <stdio.h>

// Converts a binary string to an unsigned int
unsigned int binary_to_uint(const char *b)
{
  unsigned int num = 0;
  if (!b) return 0;
  while (*b)
  {
    num = num * 2 + (*b++ - '0');
    if (num & ~1) return 0;
  }
  return num;
}

