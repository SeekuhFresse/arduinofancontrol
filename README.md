# arduinofancontrol
Sure, I’ll try to explain the wired setup you will need to control a 5V 2-pin fan with a Raspberry Pi and an Arduino. You will need the following components:

A Raspberry Pi 3 (or any model with a GPIO header)
An Arduino Uno (or any model with a PWM pin)
A 5V 2-pin DC fan
A N-channel MOSFET (such as 2N7000)
A 680 ohm resistor
A 220 ohm resistor
A USB cable
Some jumper wires
Here are the steps to wire them up:

Connect the positive wire of the fan (usually red) to the 5V pin of the Arduino.
Connect the negative wire of the fan (usually black) to the drain of the MOSFET.
Connect the source of the MOSFET to the ground pin of the Arduino.
Connect the gate of the MOSFET to a PWM pin of the Arduino (such as pin 9) through a 220 ohm resistor.
Connect the ground pin of the Arduino to the ground pin of the Raspberry Pi.
Connect the USB cable from the Arduino to the Raspberry Pi.
Connect a 680 ohm resistor between a GPIO pin of the Raspberry Pi (such as GPIO 14) and the base of a BJT transistor (such as 2N2222).
Connect the collector of the BJT transistor to the 5V pin of the Raspberry Pi.
Connect the emitter of the BJT transistor to the ground pin of the Raspberry Pi.
The wiring diagram is shown below:

The MOSFET acts as a switch that controls the power to the fan based on the PWM signal from the Arduino. The BJT transistor acts as a switch that enables the fan control option in the Raspberry Pi’s configuration. The resistors limit the current to the MOSFET and the BJT transistor to protect them from damage. The USB cable provides power and serial communication between the Arduino and the Raspberry Pi.



The detailed wiring instructions with 3x 220 ohm resistors are as follows:

Connect the positive wire of the fan (usually red) to the 5V pin of the Arduino.
Connect the negative wire of the fan (usually black) to the drain of the MOSFET.
Connect the source of the MOSFET to the ground pin of the Arduino.
Connect the gate of the MOSFET to a PWM pin of the Arduino (such as pin 9) through a 220 ohm resistor.
Connect the ground pin of the Arduino to the ground pin of the Raspberry Pi.
Connect the USB cable from the Arduino to the Raspberry Pi.
Connect three 220 ohm resistors in series between a GPIO pin of the Raspberry Pi (such as GPIO 14) and the base of a BJT transistor (such as 2N2222). The total resistance will be 660 ohms, which is close enough to 680 ohms.
Connect the collector of the BJT transistor to the 5V pin of the Raspberry Pi.
Connect the emitter of the BJT transistor to the ground pin of the Raspberry Pi.
