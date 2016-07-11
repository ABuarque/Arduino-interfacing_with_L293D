# Arduino-interfacing_with_L293D

This sketch shows how to use the L293D driver to control two motors with and Arduino board.

Every copy of that driver can control at most two motors. Each side controls a diferent motor using two pins: the INPUTS (you can see them at the annexed picture) and these pins are connected and controled by the Arduino. On the sketch, the INPUT 1 is connected to pin 2, INPUT 2 to 3, INPUT 4 to 5 and INPUT 6 to 6. 
The L293D is connected to the motors by the OUTPUT pins.
On the power supply, you have to connect the ENEBLES 1 and 2 to the Vss and also the GNDs on the Arduino's Vcc and GND, but to supply SPECIFICALLY THE MOTORS you should connect the positive of a battery to the Vs and its negative to the Arduino's GND.
