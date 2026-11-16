# Hardware Connections – Project 03

**Important:** Verify every GPIO assignment against `Smart_Home_Monitoring.ino` before wiring.

- DHT11 data: D5 (recorded during development; verify in final sketch).
- Flame sensor: use the exact digital/analogue pin defined in the sketch.
- Buzzer: use the exact output pin defined in the sketch.
- LED: use the exact output pin defined in the sketch and a suitable series resistor.

## Electrical precautions
- ESP8266 GPIO uses 3.3 V logic. Never apply 5 V to GPIO.
- Use a common ground between the NodeMCU and modules.
- Check the flame sensor module's output voltage before connecting it to A0 or a GPIO.
- Use a transistor driver if the buzzer current exceeds safe GPIO capability.
- This is a prototype circuit, not a certified safety device.
