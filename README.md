# EC11-rotary-encoder-the-easy-way (on a single mcu input pin)

# As rotary encoder without push button

# what do we need

1x	ATTINY45

2x	4K7

1x	10K

1x 	EC11

# We have 2 options for the connection to the main MCU

# with 2 outputs

1x pulse output when turning right

1x pulse output when turning left

The ATTINY45 provides 20 millisecond pulses on either the right turn output or the left turn output.

# with 1 output

1x output

The ATTINY45 delivers either 10 millisecond pulses when turning clockwise or 20 millisecond pulses when turning counterclockwise on the same output.




# As rotary encoder with push button

# what do we need

1x	ATTINY84

3x	4K7

1x	10K

1x 	EC11 with pushbutton

# We have 2 options for the connection to the main MCU

# with 2 outputs

1x pulse output when turning right

1x pulse output when turning left

The ATTINY84 provides 20 millisecond pulses on either the right turn output or the left turn output.

Push button must be connected separately to main MCU

# with 1 output

The ATTINY84 delivers 

10 milliseconds pulses when turning clockwise

20 milliseconds pulses when turning counterclockwise

30 milliseconds pulse when push button is pressed

and this on the same digital output

# Further specifications

power supply 3.3V or 5V

no extra capacitors or resistors

no libraries

works for slow and fast rotation

cheap about 3€

easy to build

# Thanks to

https://www.elektormagazine.nl/labs/rotary-encoder-on-a-single-mcu-pin

for the 1 input idea



PROGRAM ATTINY45, ATTINY84 AND ESP32 test programs IN .pdf FILE
