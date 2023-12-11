// This program prints the sum of the squares of the first n natural numbers
#include <stdio.h>

int main()
{
    int n, sum = 0; // Declare variables
    printf("Enter a positive integer: "); // Prompt user for input
    scanf("%d", &n); // Read input
    for (int i = 1; i <= n; i++) // Loop from 1 to n
    {
        sum += i * i; // Add square of i to sum
    }
    printf("The sum of squares is %d\n", sum); // Print result
    return 0; // Exit program
}
