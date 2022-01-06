//code belongs to this video: https://www.youtube.com/watch?v=6jZMJ7DFCY0

#include <SoftwareSerial.h>
SoftwareSerial BT(3, 4); // BT(RX,TX)
// creates a "virtual" serial port/UART
// connect BT module TX to 0
// connect BT module RX to 1
// connect BT Vcc to 5V, GND to GND
void setup()  
{
  // set digital pin to control as an output
  pinMode(13, OUTPUT);
  
  // set the data rate for the SoftwareSerial port
  BT.begin(9600);
  
  // Send test message to other device
  BT.println("Hello from Arduino");

  // set the data rate for the Serial monitor
  Serial.begin(9600);

  // Send text message to Serial Monitor
  Serial.println("Hello from Arduino");
}
char a; // stores incoming character from other device
char b; // stores incoming character from other device
void loop() 
{
  if (BT.available() || Serial.available())
  // if text arrived in from BT serial...
  // if text arrived in from arduino serial...
  {
    a=(BT.read());
    b = (Serial.read());
    if (a=='1' || b == '1')
    {
      digitalWrite(13, HIGH);
      BT.println(" LED on");
      Serial.println(" LED on");
    }
    if (a=='2' || b == '2')
    {
      digitalWrite(13, LOW);
      BT.println(" LED off");
      Serial.println(" LED off");
    }
    if (a=='?' || b == '?')
    {
      BT.println("Send '1' to turn LED on");
      BT.println("Send '2' to turn LED on");
      Serial.println("Send '1' to turn LED on");
      Serial.println("Send '2' to turn LED on");
    }   
    // you can add more "if" statements with other characters to add more commands
  }
}
