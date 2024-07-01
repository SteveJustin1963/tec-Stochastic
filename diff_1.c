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
 
