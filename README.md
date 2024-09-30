# tec-Stochastic
TEC-1 using Stochastic addons




### numerical integration using the trapezoidal rule - see program
 The program you aims at calculating a numerical integration using the trapezoidal rule. 
 breakdown and analysis of the code:

### Key Points:
1. **Variables:**
   - `n`, `i`, `x`, `y`, `a`, `b`, `h`, `k`, `inte`, `s`: These are used to store values such as limits (`a`, `b`), the number of subintervals (`n`), the current index (`i`), and intermediate values for integration.
   
2. **Input Handling:**
   - The user is prompted to enter the lower limit (`a`), upper limit (`b`), and the number of subintervals (`n`).
   
3. **Step Size Calculation:**
   - `h` is calculated as `(b - a) / n`, representing the width of each trapezoid.

4. **Function Values:**
   - The function being integrated is `1 / (1 + x^2)`. This is evaluated at various points and stored in `y`.

5. **Loops:**
   - It looks like multiple `WHILE` loops are nested incorrectly. The loop structure is meant to iterate through the subintervals, calculate the corresponding `x` and `y` values, and accumulate the sum of `y` values.
   - `i` is incremented inside the loops, but there seems to be redundant or misplaced conditions.

6. **Summation and Final Calculation:**
   - `s` accumulates the sum of `y` values excluding the endpoints.
   - The final result of the integral (`inte`) is calculated using the trapezoidal formula:  

![image](https://github.com/user-attachments/assets/7e3dc580-8f6e-420c-997e-698afa180085)

 \[
     \text{integral} = \frac{h}{2} \times \left( y[0] + y[n] + 2 \times s \right)
     \]
   - This value is then displayed.

### Corrections and Improvements:
- The loops and flow control could use refinement to prevent infinite loops and ensure proper summation.
- Proper condition checking and loop termination are critical.
- A more structured approach to update `x` and `y` values would make the logic clearer.

Would you like help in revising or improving this code structure?
