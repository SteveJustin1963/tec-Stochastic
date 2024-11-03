### Exploration into stochastic computing 
- use the gates as an encoder/decoder
- integers are converted to stochastic fixed point number as a ratio between 0.0000 to 1.00000
- if conversion is based on say 100 bit streams, then 5 would be 5 bits of 1 randomley mixed 95 zeros

- build gates that represent
  - boolean logic (0/1) and logic gates (more than 1 bit)
  - 7 fundamental logic gates, NOT, AND, NAND, OR, NOR, XOR, XNOR, and any combination  
  -  
  - analog logic
  - quantum logic
  - other, explore
  - control gates, like mux demux, switching etc
- io select gates
- count the o/p of the gates into a 32bit counter chip
- control with tec-1 and mint
- test against a variety of maths problems, eg trapezoidal integration etc
- consider the fit and use of Monte Carlo sampling
- consider issues 
  - very large numbers requiring specific approaches. ie scaling or log-based methods
  - negative numbers, 2s compliment ?
  - overflow and carry
  - 

