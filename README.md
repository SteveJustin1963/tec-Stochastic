# tec-Stochastic
TEC-1 using a Stochastic-CPU

## digital capacitance meter
- TE 6 page 54

The circuit that uses two 555 timers, one as a "one-shot" monostable multivibrator and the other as a free-running oscillator, along with other components such as NAND gates and capacitors, to measure the value of an unknown capacitor. The circuit works by triggering the one-shot 555 timer with the count-display pulse of a mini frequency counter, and using the unknown capacitor to provide a time delay. The output of the one-shot 555 timer is then compared to a reference source provided by the free-running oscillator and the resulting pulses are sent to the mini frequency counter for display. This circuit is an example of a stochastic process, as it uses random variations in the value of the unknown capacitor to generate a measurement. The process is made accurate by the use of digital circuits and precise timers such as the 555, which have a linear response to changes in resistance and capacitance.

## A generic stochastic circuit
could perform simple calculations and has an ADC (Analog-to-Digital Converter) chip could be constructed using the following components:
- A random noise generator, such as a Johnson-Nyquist noise generator, to provide a source of stochastic input.
- An ADC chip to convert the analog input from the noise generator into digital data that can be processed by the circuit.
- A SBC such as the TEC1, to perform the calculations and control the overall operation of the circuit.
- A digital multiplexer (MUX) to route the input from the noise generator to the ADC and to the microcontroller.
- A digital-to-analog converter (DAC) to convert the digital output of the microcontroller back into an analog signal.
- Digital Logic gates and other digital components such as flip-flop, counters and registers to perform the desired calculations.

The microcontroller would be programmed to perform the desired mathematical operations on the input data and output the result. The ADC chip would convert the analog input into digital data that can be processed by the microcontroller, while the DAC would convert the digital output back into an analog signal. The circuit could also be designed to include additional features such as display, memory, or communication interfaces.
It's important to note that this is a very general circuit, and the specific components and design will depend on the requirements of the application and the specific mathematical operations that need to be performed.

