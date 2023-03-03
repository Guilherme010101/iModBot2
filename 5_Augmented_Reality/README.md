# Augmented Reality

Using the Unity3d game engine, ROS2 and our robot library, create your virtual world, project it into the real world and watch the robot interact with it.

This functionality is still under development and for now it is still very limited.

## Requirements

 - Ubuntu 20.04 (Native ou Virtual)
 - Consult the document [Tutorial_SetUp_VM](https://github.com/Guilherme010101/iModBot2/blob/master/5_Augmented_Reality/Tutorial_SetUp_VM.pdf) to install it on a Virtual Machine (native installation is recommended).
 
 - Docker  
 - Consult the document [Tutorial_docker](https://github.com/Guilherme010101/iModBot2/blob/master/5_Augmented_Reality/Tutorial_docker.pdf) to install it and understand how it works.


## Utilization

1. Open a terminal in the folder [iModBot-Docker](https://github.com/Guilherme010101/iModBot2/tree/master/5_Augmented_Reality/iModBot-Docker).
   
2. Create the Docker image (this step takes some time).
    ```bash
    $ ./build-docker-image.bash
    ```
3. Starts the created image.
    ```bash
    $ ./run-docker-container
    ```
4.  Open the `VScode`.
    ```bash
    $ code
    ```
	  -  Install the PlatformIO extension and open the folder [VScode_Workspace\ESP32-ROS2_iModBot](https://github.com/Guilherme010101/iModBot2/tree/master/5_Augmented_Reality/iModBot-Docker/VScode_Workspace/ESP32-ROS2_iModBot), put the id and password of your Wifi network and the IP of the container.
	  - Uploads the program to the ESP32.
	  - Save changes and close VScode.
    
5. Start the `Unity Hub` and install the latest editor and open the project found in the folder [iModBot-Docker\Unity_Workspace](https://github.com/Guilherme010101/iModBot2/tree/master/5_Augmented_Reality/iModBot-Docker/Unity_Workspace/iModBot-UnityRos2).
    ```bash
    $ cd unity && ./UnityHub.AppImage
    ```
6.  Start the ROS2 Node.
 - In the terminal of the native machine that is in the folder iModBot-Docker opens a new terminal in the container.
    ```bash
    $ ./new_bash_in_container
    ```
 - In the new terminal:
    ```bash
    $ cd work/ROS2_Workspace && . install/setup.bash && ros2 run stop_oncollision oncollision
    ```
7. Starts the remote control (it can be accessed in any browser as long as it is on the local network, through the IP that appears in the window).
- Open 2 new terminals in the container, as described earlier.
- On the 1st:
    ```bash
    $ cd ros2-web-bridge && export DEBUG=ros2-web-bridge:* && node bin/rosbridge.js
    ```
- On the 2nd:
    ```bash
    $ cd ros2-web-bridge/demo && http-server -c-1
    ```
 
8. Start the MicroXRCEAgent (responsible for establishing communication between ROS2 and ESP32).
- Opens a new terminal in the container.
- Starts the program.
    ```bash
    $ MicroXRCEAgent udp4 -p 2018
    ```
Everything is ready to start your journey with augmented reality.
Whenever you want to reopen the container, run the script [start-docker-container](https://github.com/Guilherme010101/iModBot2/blob/master/5_Augmented_Reality/iModBot-Docker/start-docker-container.bash).

Video demostrativo: [https://youtu.be/DlAx3p5d99E](https://youtu.be/DlAx3p5d99E)
