# HOME AUTOMATION AND SENSOR MONITORING
An IoT sub-system to connect devices, lights etc present in a home over internet so that it can be accessed from remote far places too.
Arduino Node-MCU module has been used to implement the hardware portion.

## Hardware Needed
  1. NodeMCU Board
  2. LED output board of three colours- Red, Yellow, Green
  3. Smatphone or desktop pc which has internet access
  
## Installation
In the arduino `.ino` file in the following commented code
````
//const char* ssid = " ";
//const char* password = "";
````

in `ssid` the name of the wifi connection and in `password` the password corresponding to the wifi connection has to be provided and then the lines are needed to be uncommented.

