# Smart-Premonition-Technique
Bluetooth Controlled Car with IOT based vehicle Monitoring System and Automatic Circuit Breker


## Problem  Statement
      In our day-to-day life the road accidents and death rate should be increased  by Automobile vehicles.
      In order to reduce that,we developed the Automatic Circuit Breaker,
      which will transferred the alert message to smartphone.  
## About this Project
      This project is to push immediate alert report to phone when an accident accident occurs,
      but to avoid accident by displaying warning report and also the Automatic Circuit Breaker 
      to prevent short circuit and  fire when the accident occurs.

## How it works?

      The  microcontrollers are two Arduino UNO and NodeMCU ESP8266.
      Main Arduino UNO will recives information from Bluetooth Module and send it to the Motor Driver(L289N),
      another Arduino UNO will recives information from Ultrasonic sensor 1 & 2,and sent to micro servo , 
      I2C LCD display and two Relay.

      
      First Arduino  is controlled by another Arduino with the help of 1st Relay and 2nd Relay works to short Circuit.
      NodeMCU 02 pin which is connected with the smartphone by portable hotspot to displaying the warning message
   
      

## FAQ

#### Why two Arduino used?

    In order to make a Circuit Breaking System two Arduino should be used.
    Example:When the Airbag is opened automatically the circuit will be off. 

#### How it is Driver friendly?

    If the Driver will close to the obstacles immediately the warning message will be display on the LCD display 
    and in case of any accidents happened immediately the alert message will transferred to the smartphone.  

#### Why don't we inform through phone call?

    In this project,we use ESP8266 NodeMCU so that we only transferred only via sms.
    Further we want to develop this premonition technique by using GPRS SIM999A to inform throgh the phone call.
    But the GPRS SIM999A is cost wisely much higher.
