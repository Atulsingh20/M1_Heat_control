# M1_Heat_control
# INTRODUCTION
##Temperature:
This is the degree of hotness or coldness of a body or an environment.
##Control  System:
The heat manage gadget is largely used to control the temperature of a vehicle seat. when a person or motive force of the car receives seated on a automobile, the button sensor receives activated. After that, the consumer gets access to show on the heater. The temperature sensor continues monitoring the temperature and sends the analog fee to the microcontroller. The microcontroller strategies the analog enter of the temperature sensor and outputs a temperature cost thru serial verbal exchange. all the activities of the manipulate gadget are carried out on a microcontroller called Atmega328.

## OBJECTIVE OF THE PROJECT
The main  objective of  this project is  to design a  Temperature Control System that helps to costumer for teamprature controlling automatically.It not only provide easy interface to control the teamprature nut also automatic temprature controlling which improve smartness of car.To achieve this, a highly sensitive Temperature sensor detects the current temperature and feeds it as input to the Micro-controller.The  Micro-controller then  initiates a  sequence of control  procedures based  on  the configuration  of  the control  program  it  contains.These control  procedures would include: turning on/off a heating or cooling.

## FUNCTIONALITY
*when the 2 switches are closed, the primary LED glows indicating the actuation of the system and the heater.
*Next the analog input from the temperature sensor is received and digitized.
*The digitized temperature enter is visualized the use of Pulse Width Modulation.
*The corresponding temperature values based totally on the digitized temperature enter is transmitted by means of the UART protocol. right here the records is displayed on the serial screen.

The below provided link take you to the C coding of the application :
 https://github.com/Atulsingh20/M1_Project-/blob/d8bea39ed521d245b3edf7a5f3ae865c2e7173fe/project_shopping.c# M1_Project-
 

## SIMULATION
The capability of the warmth manipulate system is coded in embedded c and the running is validated the use of simuation in a software program known as SimulIDE. underneath suggests images in which within the 1st image suggests the repute of the simulation while the device is OFF and the second one image shows the repute of the machine while it's far ON.

 ## output 

 #### ON
![ON]"C:\Users\Asus\OneDrive\Pictures\Screenshots\Screenshot (27).png"

#### OFF
![OFF]"C:\Users\Asus\OneDrive\Pictures\Screenshots\Screenshot (28).png"

## Denonstration 
## Step 1: 

Firstly, (char items[]) is constructed , which store the product details i.e brands name ,cost and varitey .
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161277095-2b8182e3-de75-47d7-b6fb-b70905738332.png)


## step 2: 
Ask for detail of customer for example -' Please Enter Your Name'.In my code get(str) and printf use for welcoming the customer :
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161278081-b74202a4-6984-4643-84fd-9f8322ff8d19.png)


## step 3: 
After that it's give choice to the customer to select the Product in which they have number of brand with differnt price range . whenever customer select their items, they need tu enter 1 tu continue th shopping and see the total bill,if customer want to continue heri shopping they have to  enter 2 or if they want to end the shopping they have to press any other number . with the help of loop and switch statment hole function run.
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161280970-fc9fddbb-289c-4f36-b348-4994c93b849b.png)



## step 4: 
If customer want to buy product of any other category ? "Enter your choice" message shown on the screen .if customer enter any invalid value the "Enter Valid Categories Choice" is pop up on the screen .
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161282475-fb11c93d-2997-45e2-a31d-d2cb11b01492.png)


## step 5: 
At last ,if customer want to delete any product they have to enter theri id and select the product,whenever iteam is delete the price of that product will deduct from total ammount. The total amount and the cost of every product will shown on screen i.e 'Your Total Purchase Bill' and the service will end by Thank You message "Thanks %s for Shopping and Visit again to Brand Store".
![Screenshot (13)](https://user-images.githubusercontent.com/101882303/161284092-af9a1e4a-2742-432c-a697-5463dcd62af6.png)


