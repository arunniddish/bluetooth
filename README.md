# bluetooth

How to connect Bluetooth from Arduino to computer..................????????????

Step1: Connect the external bluetooth module to the respective pins in arduino board. Also include the library <SoftwareSerial.h>

Step2: Upload the desired code to the arduino.

Step3: You cant upload the code, it will shootout an error. It is because while uploading the code the RX and TX pin of the bluetooth module must be removed from arduino.

Step4: Then try uploading the code. The arduino code will be uploaded successfully.......!!!

Step5: Now remove your board and connect it to a external power supply.

Step6: Now make a bluetooth connection between your bluetooth and computer.

Step7: Click on the name of your Bluetooth device from the list and press connect. Most of the external bluetooth are password protected ( usually 1234 , 0000).

Step8: After you get connected go to the Arduino IDE and open the COM Port. Now comes the question of which COM port to be opened.

Step9: Go to Settings --> Device Manager --> Ports. Then check for the appropriate port to which the bluetooth is connected. 

Step10: Then go to arduino and open the respective port. 

Step11: If suppose you have created a code to turn on and off a LED light by sending integer 1 for ON and 0 for OFF. Type the respective integer and press Send button.

Step12: But you will notice that no changes takes place. So the mistake is that the TX pin of bluetooth is connected to TX pin of arduino and similar for RX pin.
The TX pin of bluetooth should be connected to RX pin of bluetooth since the transmission of bluetooth is the recieving of arduino borad.
Step13: Thats it! After the modifications are made then its good to work.!
		
