c code diff_1.c



#include <stdio.h>
#include <math.h>

double ito_integral(double t, double w, double (*f)(double, double)) {
     double ej, phi;
     int j;
     double I;
     
     I = 0;
     for (j = 0; j < n; j++) {
          ej = f(tj, w);
          phi = ej * chi[tj, tj+1)(t);
          I += phi;
     }
     return I;
}

double stratonovich_integral(double t, double w, double (*f)(double, double)) {
     double ej, phi;
     int j;
     double I;
     
     I = 0;
     for (j = 0; j < n; j++) {
          ej = f(tj+tj+12, w);
          phi = ej * chi[tj+tj+12, tj+1)(t);
          I += phi;
     }
     return I;
}

convert to forth 83 code



: ito-integral ( t w f -- I )
     0. 0e
:+!
     n 2@ 1-
     >r
:ito-integral-loop
     r> tj w f @ ej !
     tj tj 1+ 2@ chi * phi !
     phi +!
     1+
     n 2@ 1-
     >r
;

: stratonovich-integral ( t w f -- I )
     0. 0e
:+!
     n 2@ 1-
     >r
:stratonovich-integral-loop
     r> tj tj 1+ 2@ + tj 1+ 2@ chi * phi !
     phi +!
     1+
     n 2@ 1-
     >r
;
