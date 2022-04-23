![Code Quality](https://api.codiga.io/project/33003/score/svg) ![Code Grade](https://api.codiga.io/project/33003/status/svg)
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
* Variable Resistor 1 kOhm
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

# BASIC COMPONENTS OF A CAR TEMPERATURE CONTROL
## COMPONENTS
* ATmega 328 :- 
![ATmega328-M3X-Regular](https://user-images.githubusercontent.com/101882303/164884253-e78b3281-b1d3-4b99-b56c-a78b7dba6ed5.jpg)
ATmega328 is commonly used in many projects and autonomous systems where a simple, low-powered, low-cost micro-controller is
needed.The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB
EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general- purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software- selectable power-saving modes. The device operates between 1.8 and
5.5 volts. The device achieves throughput approaching 1 MIPS/MHz.

* VARIABLE RESISTOR:-
![variable-resistor-500x500](https://user-images.githubusercontent.com/101882303/164884355-8bebcccc-cfa5-41be-aab6-2e32199559fa.jpg)
A variable resistor is a resistor of which the electric resistance value can be adjusted. A variable resistor is in essence an electro mechanical transducer and normally works by sliding a contact (wiper) over a resistive element

* RESISTOR:-
![Resistor](https://user-images.githubusercontent.com/101882303/164884447-e23633fb-4d41-412e-a376-c520a0f1f707.jpg)
A device having resistance to the passage of an electric current.

* LED:-
![LED](https://user-images.githubusercontent.com/101882303/164884504-b24b3b8d-d2e7-444d-94b5-8e046a6c94ef.jpg)
LED stands for light emitting diode. LED lighting products produce lightup to 90% more efficiently than incandescent light bulbs. How do they work? An electrical current passes through a microchip, which illuminates the tiny light sources we call LEDs and the result is visible light.

# FUNCTIONALITY
* when the 2 switches are closed, the primary LED glows indicating the actuation of the system and the heater.
* Next the analog input from the temperature sensor is received and digitized.
* The digitized temperature enter is visualized the use of Pulse Width Modulation.
* The corresponding temperature values based totally on the digitized temperature enter is transmitted by means of the UART protocol. right here the records is displayed on the serial screen.

# The below provided link take you to the C coding of the application :
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
