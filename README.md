## Code Quality & Code Grade
|![Code Quality Score](https://api.codiga.io/project/33003/score/svg)| ![Code Grade](https://api.codiga.io/project/33003/status/svg)| ![Codacy Code Grade]| ![Codacy Badge](https://app.codacy.com/project/badge/Grade/3c3a383b7a204c5bb3803a60cf646edb)]| [![Codacy Security Scan](https://github.com/Atulsingh20/M2_CAR_TEMPERATURE_CONTROL/actions/workflows/codacy.yml/badge.svg)](https://github.com/Atulsingh20/M2_CAR_TEMPERATURE_CONTROL/actions/workflows/codacy.yml)

# CAR TEMPERATURE CONTROL

# INTRODUCTION
 Temperature: 
 This is the degree of hotness or coldness of a body or an environment.

Control  System:
The heat manage gadget is largely used to control the temperature of a vehicle seat. when a person or motive force of the car receives seated on a automobile, the button sensor receives activated. After that, the consumer gets access to show on the heater. The temperature sensor continues monitoring the temperature and sends the analog fee to the microcontroller. The microcontroller strategies the analog enter of the temperature sensor and outputs a temperature cost thru serial verbal exchange. all the activities of the manipulate gadget are carried out on a microcontroller called Atmega328.

# OBJECTIVE OF THE PROJECT
The main  objective of  this project is  to design a  Temperature Control System that helps to costumer for teamprature controlling automatically.It not only provide easy interface to control the teamprature nut also automatic temprature controlling which improve smartness of car.To achieve this, a highly sensitive Temperature sensor detects the current temperature and feeds it as input to the Micro-controller.The  Micro-controller then  initiates a  sequence of control  procedures based  on  the configuration  of  the control  program  it  contains.These control  procedures would include: turning on/off a heating or cooling.

# BASIC COMPONENTS OF A  CAR TEMPERATURE CONTROL 
##  HARDWARE
* Atmega 328
* Potentiometer
* Pair of 100 ohm Resistors 
* Pair Of Switch
* CRO( To Show Temprature in Graph)
* Serial Monitor (Actual Temprature Value)
* LED(2)
* 5v DC Supply
* Pair of Probe (Measure Terminal Voltage)
* GROUNDING
## SOFTWARE
* MICROCHIP STUDIO
* VS CODE
* SIMULIDE

# FUNCTIONALITY
* when the 2 switches are closed, the primary LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized.
* The digitized temperature enter is visualized the use of Pulse Width Modulation.
* The corresponding temperature values based totally on the digitized temperature enter is transmitted by means of the UART protocol. right here the records is displayed on the serial screen.

### The below provided link take you to the C coding of the application :
https://github.com/Atulsingh20/M2_CAR_TEMPERATURE_CONTROL/tree/main/3_Implementation

# SIMULATION
The capability of the warmth manipulate system is coded in embedded c and the running is validated the use of simuation in a software program known as SimulIDE. underneath suggests images in which within the 1st image suggests the repute of the simulation while the device is OFF and the second one image shows the repute of the machine while it's far ON.

 # ON
 ![Screenshot (27)](https://user-images.githubusercontent.com/101882303/164517676-6a7c6580-efc9-4ee7-91b1-8f76dbad2ba6.png)

 # OFF
 ![Screenshot (28)](https://user-images.githubusercontent.com/101882303/164517920-010f9f63-c61c-4c17-a156-13eb9195da5f.png)

# Demo
* OUTPUT

|Circuit|RAM Table|
|:--:|:--:|
![CIRCUIT](https://user-images.githubusercontent.com/101882303/164528660-947e3fe2-8bc2-420d-a089-6a931fff7f31.gif)|![RAM_table](https://user-images.githubusercontent.com/101882303/164530906-09186bbe-e83c-4ff8-96fc-406483e466d6.gif)
|CRO|Serial Monitor|
![CRO](https://user-images.githubusercontent.com/101882303/164528653-b33c22de-45c4-4758-af54-ae47ee929daf.gif)|![SERIAL MONITOR](https://user-images.githubusercontent.com/101882303/164531951-ecaf2900-9c9f-4383-993a-437ab6586715.gif)

# Test Case
# Table
| Test ID | Description | Exp I/P| Exp O/P|Test case
| --- | --- | --- | ---- |-----|
| T_01 |  Led control by two switches |2-switch off|  Led Blink |Pass|
| T_02| Universal Asynchronous Receiver Transmitter(USART) communication| data  | data |Pass|
| T_03 | Pulse With Modulation in sensor ||  successfully added |Pass|
| T_04|Potentiometer  at max voltage  |5v| temp(33 degree)|Pass|
