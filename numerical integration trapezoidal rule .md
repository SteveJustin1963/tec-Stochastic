some longer var names used replace with single letter in mint
```
// MINT 2.0
:main
    20 m !                                 // Set 'm' (max) to 20

    // Prompt user for input
    `Enter lower limit, upper limit, and number of sub intervals` /N

    // Accept inputs and store them in variables 'a', 'b', and 'n'
    /K a !                                 // Store first input to 'a'
    /K b !                                 // Store second input to 'b'
    /K n !                                 // Store third input to 'n'

    // Calculate h = (b - a) / n
    b a - n / h !

    // Allocate memory for arrays 'x' and 'y'
    m /A x !                                // Allocate 'm' bytes for array 'x'
    m /A y !                                // Allocate 'm' bytes for array 'y'

    // Initialize x[0] = a
    a x 0 + !                              // Store value of 'a' at x[0]

    // Initialize y[0] = 1 / (1 + x[0]^2)
    x 0 ? " * 1 + 1 / y 0 + !            // Compute 1 / (1 + x[0]^2) and store in y[0]

    // Print headers
    `x y` /N

    // Initialize loop counter 'i' to 1
    1 i !

    // Begin loop to compute x[i] and y[i] for i = 1 to n-1
    /U (
        i n < /W                           // If i >= n, break the loop

        // Compute x[i] = x[i-1] + h
        i 1 - x 0 + ? h + x i !            // x[i] = x[i-1] + h

        // Compute y[i] = 1 / (1 + x[i]^2)
        x i ? " * 1 + 1 / y i !          // y[i] = 1 / (1 + x[i]^2)

        // Increment i
        i 1 + i !
    )

    // Reset loop counter 'i' to 1 for summing y values
    1 i !

    // Initialize sum 's' to 0
    0 s !

    // Begin loop to sum y[1] to y[n-1]
    /U (
        i n < /W                           // If i >= n, break the loop

        // Add y[i] to sum 's'
        y i ? s + s !

        // Increment i
        i 1 + i !
    )

    // Calculate the integral: inte = h * (y[0] + y[n] + 2 * s) / 2
    y 0 ? y n ? + s 2 * + h * 2 / inte !

    // Print the result
    `The value of the integral is ` inte . /N

;
main
```
