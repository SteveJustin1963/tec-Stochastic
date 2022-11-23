

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, t;

    // Step 1: If x(t) is Brownian motion, ∫bax(t)dt is defined.
    printf("Step 1: If x(t) is Brownian motion, ∫bax(t)dt is defined.\n");
    for (t = a; t <= b; t++)
    {
        x = Brownian_motion(t);
        integral += x;
    }

    // Step 2: If x(t) is a simple process (a function of an exponential waiting time), ∫bax(t)dt is defined.
    printf("\nStep 2: If x(t) is a simple process (a function of an exponential waiting time), ∫bax(t)dt is defined.\n");
    for (t = a; t <= b; t++)
    {
        x = simple_process(t);
        integral += x;
    }

    // Step 3: If x(t) is a more complicated process, the question of when ∫bax(t)dt is defined depends on the properties of its sample paths and what is interesting to see is if the set A⊂Ω for which x(t,ω), ω∈A is integrable, P(A)=1 or not.
    printf("\nStep 3: If x(t) is a more complicated process, the question of when ∫bax(t)dt is defined depends on the properties of its sample paths and what is interesting to see is if the set A⊂Ω for which x(t,ω), ω∈A is integrable, P(A)=1 or not.\n");
    for (t = a; t <= b; t++)
    {
        x = complicated_process(t);
        if (is_integrable(x))
        {
            integral += x;
        }
    }

    return 0;
}
