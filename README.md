# tec-Stochastic
TEC-1 using a Stochastic-CPU




https://math.stackexchange.com/questions/612848/meaning-of-differentiation-of-stochastic-process

Let Xt,t∈T continuous time stochastic process. What is the meaning of dXt which is differentiation of Xt? Does that mean Xt+dt and Xt are random variables so dXt≈Xt+dt−Xt is also random variable?

In the context of stochastic differential equations, the meaning of dXt is "derived" from the definition of corresponding integrals I[f](ω)=∫TSf(t,ω)dXt(ω). The integral is defined by suitable approximation of f by elementary functions ϕ of the form ϕ(t,ω)=∑jej(ω)⋅χ[tj,tj+1)(t).

However, the problem is that the actually used suitable approximation strongly influences the definition of the resulting integral and its properties. The Ito integral corresponds more or less to using ej(ω)=f(tj,ω), while using ej(ω)=f(tj+tj+12,ω) leads to the Stratonovich integral.

If I try to translate these definitions back into your language/notation, the Ito integral would more or less correspond to your suggestion dXt≈Xt+dt−Xt, while the Stratonovich integral would correspond more or less to dXt≈Xt+dt/2−Xt−dt/2.
 

summarise

The Ito integral is defined by approximating the function f by elementary functions of the form ϕ(t,ω)=∑jej(ω)⋅χ[tj,tj+1)(t). The Stratonovich integral is defined by approximating the function f by elementary functions of the form ϕ(t,ω)=∑jej(ω)⋅χ[tj+tj+12,tj+1)(t).

c code diff_1.c
forth 83 code diff_1.f83



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
