WRITE Stochastic Computing code in c to add two inputs together



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize the random number generator
    srand(time(0));

    // Declare variables
    int input1, input2, output;

    // Get input1 from the user
    printf("Enter input1: ");
    scanf("%d", &input1);

    // Get input2 from the user
    printf("Enter input2: ");
    scanf("%d", &input2);

    // Initialize output to 0
    output = 0;

    // Loop through each bit in input1
    for(int i = 0; i < sizeof(int) * 8; i++)
    {
        // If the i-th bit in input1 is 1
        if((input1 >> i) & 1)
        {
            // Flip a coin
            if(rand() % 2)
            {
                // If the coin is heads, add 2^i to output
                output += 1 << i;
            }
        }
    }

    // Loop through each bit in input2
    for(int i = 0; i < sizeof(int) * 8; i++)
    {
        // If the i-th bit in input2 is 1
        if((input2 >> i) & 1)
        {
            // Flip a coin
            if(rand() % 2)
            {
                // If the coin is heads, add 2^i to output
                output += 1 << i;
            }
        }
    }

    // Print the output
    printf("%d + %d = %d\n", input1, input2, output);

    return 0;
}
