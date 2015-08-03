# Codesys-Makeblock simple example

![Video showing the example](http://az61094.vo.msecnd.net/img/09/f7bdbcd1-116a-429a-a03b-3eb54e0b40b5/940/528)

This is a simple example showing that you can program the Makeblock products with Codesys - industrial IEC 61131-3 PLC programming.
In the example we use the Me Line sensor to send information to the Codesys controller true Modbus TCP/IP communication. The controller reacts to the two sensors buy commanding the Arduino to change colours on the Makeblock LED RGB Strip (0.5m).

Video showing the example:

[![Video showing the example](http://img.youtube.com/vi/T-D1KVIuvjA/0.jpg)](http://www.youtube.com/watch?v=T-D1KVIuvjA)

Part used for this example:
+	Raspberry PI 
+	Arduino UNO
+	Arduino Ethernet Shield
+	[Makeblock Me UNO Shield](http://www.kreativadelar.se/shop/product/me-uno-shield?tm=produkter) 
+	Makeblock Me Line Follower V2.2
+	[Makeblock Me RJ25 Adapter V2.1](http://www.kreativadelar.se/shop/product/me-rj25-adapter-v21?tm=produkter)
+	Makeblock LED RGB Strip (0.5m)

Parts can be bought at (http://www.kreativadelar.se)

Library and software used for this example:
+ [Makeblock library for Arduino](https://github.com/Makeblock-official/Makeblock-Library)
+	[Modbus TCP/IP library for Arduino](https://code.google.com/p/mudbus/downloads/list)
+	[CODESYS Control for Raspberry Pi SL](http://store.codesys.com/codesys-control-for-raspberry-pi-sl.html)
+	[CODESYS Development System for programming the controller](http://store.codesys.com/codesys.html)  

Resource for this example:

http://fleaplc.it/en/tutorials/33-arduino-as-raspberry-pi-s-remote-io-codesys
