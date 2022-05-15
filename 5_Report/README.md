# M3_WIPER_CONTROL_SYSTEM
I would like to point out that, despite the fact that practically everything about this design has previously been defined, there are still several types of enhancements that may be implemented to make it even more convenient. In terms of efficiency and cost effectiveness, the project that we have developed and presented is pretty effective. In comparison to the optical sensor, it has significant advantages in that it can accommodate all of the design parameters as well as the needs of the average person. This project can benefit from the addition of a speed-controlling mechanism, which will allow it to operate in accordance with the intensity and speed of the water flowing through the sensor. The fundamental manoeuvring is done merely to make it more cost-effective and reliable in the long run. The idea i have been implemented is completly in working condition these can be used in any type of cars.We can also make this wiper system automatic by adding sensors for rain water falling on the wind shiled,dust resistance sensor,etc.So,there is no need to control the wiper system manually while driving the car.It can be more convinient we add the additional features to the wiper system and it can be done in near future.People around the world still working on this project so that we can make a system that works requires less human intervention.
## Folder Structure
|Folder|Description|
|------|-----------|
|0_Abstract|	about project|
|1_Requirements|	Documents detailing requirements and research|
|2_Architecture	|Documents specifying design details|
|3_Implementation	|All code and documentation|
|4_TestCases|	Documents with test plans and procedures|
|5_Report|	Documentation of the whole Project|
|6_Output|	Output of the Project|

## Abstract
For this project, we use the STM32F4xx-discovery board to display the vehicle filter control system. Most car wires are controlled by a DC motor, however because the STM32F4xx-discovery does not have an engine, we test using LEDs in this application. For example, wiper control system. The STM32F4xx-discovery board has four LEDs and a Push Button. The colors of these LEDs are orange, green, red and blue. Current limit resistance connects four user LEDs to PD12, PD13, PD14, and PD15 PORTD pins on the Recovery board. To activate the push button with the STM32F407VG controller, GPIO PINs will be set as digital input pins. When you press and hold the user button for two seconds, Red When the ignition key is set to ACC, the LED turns on. In addition, the LEDs flash, indicating that the wipers are on.

The operation of the windshield wiper is a manual operation that requires opening to remove rain and debris from the screen. This not only requires the driver's attention, but also, causes a certain degree of discomfort to the driver and serves as a source of distraction that increases the risk of accidents. To comfort the driver and reduce the risk of accidents, an automatic rain sensor is now a must. Although such a device is available on the market, its high cost and other similar limitations have made it relatively popular in the automotive industry. The aim of this project was to promote another cost-effective model in the market while maintaining efficiency. Rain sensor, microcontroller and integrated driver circuit (IC) are the major components used in the construction and operation of the proposed device. Falling water is quickly and accurately detected by a rain sensor and transmits the signal to the second component i.e..microcontroller which gives the driver IC the ability to change the required movement of the wires when using a servo motor. This device converts hard manual labor into smooth automatic.

# Requirement
## INTRDUCTION
Wiper system is the utility project. It is used to clean the wind shield of the car at the front and rear. Wiper works by removing oil,dust,rain water and dirt.That get struck to the wind shield and the arm is provided by the motor.The warm gear is able to generate the force required to move the wipers as fast as they need to move. now a days we have an automatic wiper control when ever we stop wiping in between the process it will automatically comes to initial position this is the new wiper system as behined in the wiper arm.The car wipers that have been available in the present day market are manual systems that work on the principle of manual switching.Our proposed system proposes an automatic wiper system that automatically switches ON the wiper on detection of rain and stops the wiper action when rain stops. This system eases the work of driver by eliminating the manual human intervention for initiating the wiper action, thereby contributing to the comfort driving. This Wiper Speed Control System is utilised in all sorts of automobiles, and its primary function is to remove rain air drops from the vehicle's front screen. Because driving a vehicle in the rain is quite difficult, we will use wipers to clear the front screen of the vehicle, which is a mirror, so that we may drive the vehicle even in the rain.

## WORKING
- The RED LED is considered for the ACC position. Once the push button is pressed for 2 seconds, the RED LED keeps continuously glowing until the stop of the engine signifying the engine condition to be turned ON.
- On press of the user input push button, the other three Blue, Green and Orange LEDs come ON one at a time with the set frequency. The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz.
- The LED glow pattern stops on the 4th press; the wiper action starts with the next press.
- If the push button is pressed for 2 seconds continuously, the RED light goes off and the pattern stops bringing it to default position which signifies the engine is turned OFF.
# REQUIREMENTS FOR THE PROJECTS ARE :
## STM32Cube IDE :
- STM32Cube software ecosystem. STM32CubeIDE is an advanced C/C++ development platform with peripheral configuration, code generation, code compilation, and debug features for STM32 microcontrollers and microprocessors. It is based on the Eclipse®/CDT™ framework and GCC toolchain for the development, and GDB for the debugging. It allows the integration of the hundreds of existing plugins that complete the features of the Eclipse® IDE.
## Xpack Packages :
### Windows Build Tools:
- The xPack Windows Build Tools is a standalone Windows binary distribution of GNU make and a few of other tools required by the Eclipse Embedded CDT (formerly GNU MCU/ARM Eclipse) project, but the binaries can also be used in generic build environments.
### OpenOCD :
- Open On-Chip Debugger (OpenOCD) is a free, open-source project that aims to provide debugging, in-system programming, and boundary scan using a debug adapter. The adapter is a hardware module that provides the right signals for the target to understand.
### QEMU :
The xPack QEMU Arm is a standalone cross-platform binary distribution of QEMU, with several extensions for Arm Cortex-M devices.
## COMPONENTS USED IN PROJECT:
## STM32F407G-DISC1
STM32F407 series of microcontrollers are high-performance MCUs designed for medical, industrial and consumer applications. It is based on ARM Cortex-M4 and offers up to 168MHz. The STM32F407VGT6 is the onboard chip which comes in a 100-pin LQFP package.

The STM32F407G-DISC1 is a Discovery Kit allows users to easily develop applications with the STM32F407 high performance microcontrollers with ARM cortex-M4 32-bit core. It includes everything required either for beginners or for experienced users to get quickly started. Based on the STM32F407VGT6, it includes an ST-LINK/V2 or ST-LINK/V2-A embedded debug tool, two ST MEMS digital accelerometers, a digital microphone, one audio DAC with integrated class D speaker driver, LEDs and push buttons and an USB OTG micro-AB connector.

### Features Of STM32F407G
Flash memory of up to 1 megabyte.
OTP memory of 512 bytes.
Compact Flash, SRAM, PSRAM, NOR, and NAND memories are supported by this flexible static memory controller.
Sleep, Stop, and Standby modes are low-power modes.
16-stream DMA controller with FIFOs and burst support for general-purpose DMA.
Up to 54 Mbytes/s 8- to 14-bit parallel camera interface.
Generator of true random numbers.
Hardware calendar, CRC calculating unit, 96-bit unique ID RTC, subsecond accuracy.
# 4 W'S
### WHAT IS WIPER SYSTEM
Windscreen wipers are necessary for maintaining sufficient view for the driver, especially in modern high-speed cars.
### WHY WIPER SYSTEM
To keep the windscreen clean enough to give adequate view at all times.
### WHEN SHOULD USE WIPER SYSTEM
The windshield wipers remove rain and snow from the windshield, while the headlights improve visibility at night.
### WHO DISCOVERED WIPER SYSTEM
Mark Anderson invented on 1902
# SWOT Analysis
## Strength
Visibility
The wiper does not stop in the middle of the window during drive.
Safety
## Weakness
High cost
Not automatic
## Opportunities
Rain sensing and automatic operation can be implemented as further enhancement.
## Threats
Once the board repaired cannot be replaced quickly
# Requirements
## High level requirements
|ID|	Discription	|status|
|--|--------------|------|
|HR_01|	Car is in ACC mode	|Implemented|
|HR_02	|Car is in Ignition mode|	Implemented|
|HR_03|	Wiper turned on|	Implemented|
|HR_04	|Wiper turned off	|Implemented|
## Low level requirements
|ID	|Discription|	status|
|---|-----------|-------|
|LR_01	|Button pressed ONCE for two seconds - ON LED RED	|Implemented|
|LR_02	|Button pressed once again times - OFF LED RED|	Implemented|
|LR_03	|Button pressed two time - ON BLUE,GREEN,ORANGE|	Implemented|
|LR_04	|Button pressed again for two seconds - OFF ORANGE,GREEN,BLUE	|Implemented|
