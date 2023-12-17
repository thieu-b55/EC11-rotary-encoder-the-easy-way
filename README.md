# EC11-rotary-encoder-the-easy-way

what do we need

1x	ATTINY45

2x	4K7

1x	10K

1x 	EC11

We have 2 options for the connection to the main MCU



with 2 outputs

1x pulse output when turning right

1x pulse output when turning left

The ATTINY45 provides 20 millisecond pulses on either the right turn output or the left turn output.



or with 1 output

1x output

The ATTINY45 delivers either 10 millisecond pulses when turning clockwise or 20 millisecond pulses when turning counterclockwise on the same output.

Thanks to

https://www.elektormagazine.nl/labs/rotary-encoder-on-a-single-mcu-pin

for the 1 input idea



Remark:

When using an ATTINY with more GPIOs such as the ATTINY44, it is possible to also code the push button via the same output

10 milliseconds > turn right

20 milliseconds > turn left

30 milliseconds > push button.

This means we still stay within the 40 milliseconds that are currently used for 1 pulse.



Further specifications

power supply 3.3V or 5V

no extra capacitors or resistors

no libraries

works for slow and fast rotation

cheap about 3€

easy to build

PROGRAM IN .pdf FILE
