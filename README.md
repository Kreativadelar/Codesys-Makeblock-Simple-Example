# Codesys-Makeblock Simple example

This is a simple example showing that you can program the Makeblock products with Codesys - industrial IEC 61131-3 PLC programming.
In the example we use the Me Line sensor to send information to the Codesys controller true Modbus TCP/IP communication. The controller reacts to the two sensors buy commanding the Arduino to change colours on the Makeblock LED RGB Strip (0.5m).

[![Video showing the example](http://img.youtube.com/vi/T-D1KVIuvjA/0.jpg)](http://www.youtube.com/watch?v=T-D1KVIuvjA)

Part used for this example:
•	Raspberry PI 
•	Arduino UNO
•	Arduino Ethernet Shield
•	Me UNO Shield
•	Me Line Follower V2.2
•	Makeblock LED RGB Strip (0.5m)


Library and software used for this example:
•	Modbus TCP/IP library for Arduino (https://code.google.com/p/mudbus/downloads/list)
•	CODESYS Control for Raspberry Pi SL (http://store.codesys.com/codesys-control-for-raspberry-pi-sl.html)

Resource for this example:

http://fleaplc.it/en/tutorials/33-arduino-as-raspberry-pi-s-remote-io-codesys
