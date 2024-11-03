### Exploration into stochastic computing 
- encoding numbers
  - raw number streams, 5 = 1,1,1,1,1 and 98 = 1,1..........1 (98 of them)
  - probabilities, eg 1/5 = 1 mixed with 4x 0's, ie 1,0,0,0,0 or 0,0,1,0,0, we can make the streams larger so long as the ratios is the same
  - analog, convert 16bit integers to a smooth analog voltage from 0-10 Volts
  -   
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

