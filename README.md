# tec-Stochastic
TEC-1 using a Stochastic-CPU

## digital capacitance meter
- TE 6 page 54

The circuit that uses two 555 timers, one as a "one-shot" monostable multivibrator and the other as a free-running oscillator, along with other components such as NAND gates and capacitors, to measure the value of an unknown capacitor. The circuit works by triggering the one-shot 555 timer with the count-display pulse of a mini frequency counter, and using the unknown capacitor to provide a time delay. The output of the one-shot 555 timer is then compared to a reference source provided by the free-running oscillator and the resulting pulses are sent to the mini frequency counter for display. This circuit is an example of a stochastic process, as it uses random variations in the value of the unknown capacitor to generate a measurement. The process is made accurate by the use of digital circuits and precise timers such as the 555, which have a linear response to changes in resistance and capacitance.

## generic stochastic circuit parts
- SS stochastic stream, when data is mixed with RN
- IP input, can be from world converted via ADC or from tec1 out port
- ADC, DAC, analog to digital converter, digitial to analog converte
- RN, the source of stochastic input from a random noise generator ( eg Johnson-Nyquist noise generator)
- DLG Digital digital logic gates and other  components such as FF flip-flop, C counters etc 
- R registers or input port of tec1 to perform the desired interpretation / calculation
- MUX digital multiplexer to route SS traffic and send to counter or integrator + ADC to the tec1
```
RN+IP--DLG--|
RN+DLG------|
RN+ADC------|--MUX---R---tec1---can loop back to IP thru out port
RN+FF-------|
RN+C--------|
```
The tec1 would be programmed to perform the desired mathematical operations on the input data and output the result. The ADC chip would convert the analog input into digital data that can be processed by the tec1, while the DAC would convert the digital output back into an analog signal. The tec1 has additional features such as 7 segment display and LCD display, MINT system, serial port and a math processor 9511.
This is a very general circuit, and the specific components and design will depend on the requirements of the application and the specific mathematical operations that need to be performed.



