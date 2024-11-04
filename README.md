### Exploration into stochastic computing 
- encoding numbers
  - raw number streams, 5 = 1,1,1,1,1 and 98 = 1,1..........1 (98 of them)
  - probabilities, eg 1/5 = 1 mixed with 4x 0's, ie 1,0,0,0,0 or 0,0,1,0,0, we can make the streams larger so long as the ratios is the same
  - analog, convert 16bit integers to a smooth analog voltage from 0-10 Volts
  - crude DAC - feeding a stream of 0s and 1s into a capacitor can be a crude form of digital-to-analog conversion. the capacitor charges to a certain voltage level. When a 0 pulse is applied, the capacitor discharges through a resistor or other load. By varying the duration of the 1 pulses (duty cycle), we can control the average voltage across the capacitor, effectively modulating the analog output. issues, has low resolution, limited by the capacitor's charging and discharging time constants and the frequency of the digital pulses. Also noise and ripple especially at low frequencies. and slow response time as capacitor takes time to charge and discharge, limiting the speed of the conversion process. better to use a dedicated DAC circuits and get achieve higher resolution, lower noise, and faster response times. we can play with the capacitor as a simple and intuitive way.



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

