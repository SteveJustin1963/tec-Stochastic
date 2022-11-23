# tec-Stochastic
TEC-1 using a Stochastic-CPU



## differentiation of stochastic process

https://math.stackexchange.com/questions/612848/meaning-of-differentiation-of-stochastic-process

"Let Xt,t∈T continuous time stochastic process. What is the meaning of dXt which is differentiation of Xt? Does that mean Xt+dt and Xt are random variables so dXt≈Xt+dt−Xt is also random variable?

In the context of stochastic differential equations, the meaning of dXt is "derived" from the definition of corresponding integrals I[f](ω)=∫TSf(t,ω)dXt(ω). The integral is defined by suitable approximation of f by elementary functions ϕ of the form ϕ(t,ω)=∑jej(ω)⋅χ[tj,tj+1)(t).

However, the problem is that the actually used suitable approximation strongly influences the definition of the resulting integral and its properties. The Ito integral corresponds more or less to using ej(ω)=f(tj,ω), while using ej(ω)=f(tj+tj+12,ω) leads to the Stratonovich integral.

If I try to translate these definitions back into your language/notation, the Ito integral would more or less correspond to your suggestion dXt≈Xt+dt−Xt, while the Stratonovich integral would correspond more or less to dXt≈Xt+dt/2−Xt−dt/2.  ..."
 

## summarise

The Ito integral is defined by approximating the function f by elementary functions of the form ϕ(t,ω)=∑jej(ω)⋅χ[tj,tj+1)(t). The Stratonovich integral is defined by approximating the function f by elementary functions of the form ϕ(t,ω)=∑jej(ω)⋅χ[tj+tj+12,tj+1)(t).

c code diff_1.c
forth 83 code diff_1.f83

## integration of stochastic process

https://math.stackexchange.com/questions/1756532/integrability-of-a-stochastic-process

" Let x(t) be some random path t∈[a,b]⊂R. I.e. x:Ω→R[a,b] etc.

When is ∫bax(t)dt defined?

If x(t) is Brownian motion, I know it's ok.

A much simpler example is x(0)=1, waits an exponential length of time T and then jumps down to zero. Thus ∫∞0x(t)dt has the same distribution as T.

I think the question this: Under what conditions is a stochastic process Lebesgue integrable on some interval?

Is it just that the pre-image of measurable sets in R are measurable w.r.t. the product measure on Ω×[a,b]? How does this translate to properties of the stochastic process, e.g. bounded variation, etc.? Any hints or references are appreciated!

Well... I guess it depends on what you want. When you ask when ∫bax(t)dt is defined, do you want to have it defined for a.a ω or for every ω? If ω∈Ω is fixed then xω(t):=x(t,ω)∈R is a function in the usual sense. Hence, you need to ensure xω is Lebesgue integrable, if you want it for a.a. or every ω is a matter of what you need it for. – 
Martingalo
 Apr 24, 2016 at 12:24 
Good question. I was assuming that almost always defined would be ok. Is that what is standard? I'm sure there is a well-developed theory out there for integrals of this kind. I'd be happy to have any insight. This is not for any purpose other than trying to understand under what conditions stochastic processes give integrable paths. – 
jdods
 Apr 24, 2016 at 13:04
Well, this depends on the properties of its sample paths and what is interesting to see is if the set A⊂Ω for which x(t,ω), ω∈A is integrable, P(A)=1 or not. As another example... If X is a stochastic process with integrable trajectories and FX is the filtration generated by X. Then any other stochastic process Y which is adapted to FX has locally integrable trajectories as well. Therefore, if W is a Brownian motion, any process X which can be written as a Borel-measurable function of W will have integrable trajectories. – 
Martingalo
 Apr 24, 2016 at 13:17
That makes sense and goes along with what I've read about stochastic calculus thus far. Is it possible for a process that can't be expressed as a measurable function of Brownian motion to have measurable paths? – 
jdods
 Apr 24, 2016 at 13:44
Of course, both cases. But this is something which you either impose "Let X be a process with a.s. integrable trajectories" or you prove it ad hoc, as for instance, the example used above, "since this proces can be written as.... then...." – 
Martingalo
 Apr 24, 2016 at 13:57
 
 "
 
## summarise

 

integrability of stochastic process:

1) If x(t) is Brownian motion, ∫bax(t)dt is defined.

2) If x(t) is a simple process (a function of an exponential waiting time), ∫bax(t)dt is defined.

3) If x(t) is a more complicated process, the question of when ∫bax(t)dt is defined depends on the properties of its sample paths and what is interesting to see is if the set A⊂Ω for which x(t,ω), ω∈A is integrable, P(A)=1 or not. 

c code for the above 3 steps
integ_1.c
 
