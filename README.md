
# Project Presentation 
This iModBot project consists of a low-cost modular robot that can be programmed using block programming language and/or C/C++ language.
This project has a library to facilitate the control of the robot.

Block programming is divided into 4 levels to facilitate user learning. The levels are as follows:
 - Beginner level -> It is possible to have the robot perform a task with 1 to 2 blocks.
 - Normal level -> The user has more control over the movement of the robot, he only has the loop function.
 - Middle level -> The user can now place blocks in the Setup and Loop function.
 - Advanced level -> The user has all the functions of the library and needs to configure all aspects of the robot.
    
![ROBOT](https://user-images.githubusercontent.com/61513539/82364254-f0e14d80-9a06-11ea-9d6f-fb408e07dd22.jpg)

# How to transfer files from GitHub
On GitHub it's not possible to upload any file individually. It's recommended to transfer all folders and files present in this project. To do so, follow the instructions below:

Start by downloading all files in .zip format.
![](https://user-images.githubusercontent.com/60508542/85849029-1b5ebd00-b7a2-11ea-8346-0e61bc6c73ff.png)

Open the location of the downloaded .zip file and use a program to extract the contents.
![](https://user-images.githubusercontent.com/60508542/85849135-506b0f80-b7a2-11ea-86b6-15204e42a5db.png)

Finally you'll get a set of folders and files organized in the same way as they are in this repository.

![](https://user-images.githubusercontent.com/60508542/85849176-61b41c00-b7a2-11ea-9cf0-36eb9aabff0b.png)

# Project Elaboration
**1st Step of the Project**

To assemble the robot just follow the document 3-03_iModBot_Offline_Assembly_Guide ([3-03_iModBot_Offline_Assembly_Guide.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-03_iModBot_Offline_Assembly_Guide.pdf)) that shows how to assemble or watch the video [iModBot@ipleiria.pt guia de montagem](https://www.youtube.com/watch?v=i4wFh0GqzkM&feature=emb_logo). This document also includes a listing of components that will be needed for its assembly. To better understand what each component of the robot does, you can read the technical manual ([3-01_iModBot_Tech_Manual.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-01_iModBot_Tech_Manual.pdf)) which explains various aspects of the robot.

Material list:
 * ESP32 wroom32 devkit ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723725-6ec20400-b6eb-11ea-908e-e79d1794d0ee.png">
</p>

 * l293d 4 channel module ;
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723609-505c0880-b6eb-11ea-87d1-0e9cb917e384.png">
</p>   

 * 2x LM393 speed sensor ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723629-54882600-b6eb-11ea-8e68-96af385e72c1.png">
</p> 

 * BFD-1000 5CH ;
  <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723093-cf047600-b6ea-11ea-81e3-f72a01ec48b6.png">
</p>   

 * HC-SR04 ;
  <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85724200-e4c66b00-b6eb-11ea-9789-b2eacbc635ab.png">
</p> 

 * I2C level shifter ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85724071-c19bbb80-b6eb-11ea-8eb0-9afc799fef34.png">
</p> 

 * TP4056 ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85724148-d5472200-b6eb-11ea-8c86-d48509ba7451.png">
</p> 

 * MT3608 ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85726065-a5008300-b6ed-11ea-98b0-1c33093c3eb8.png">
</p> 

 * li-ion rechargable battery 2500 mAh ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723808-81d4d400-b6eb-11ea-81da-f25455cd2255.png">
</p> 

 * 2x Breadboard 400 ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723875-92854a00-b6eb-11ea-9e6c-e71d3e19aa65.png">
</p> 

 * Jumper wire male male, Jumper wire male female ; 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85724007-b34d9f80-b6eb-11ea-9909-54d1adc4b83c.png">
</p> 

 * 2wd smart robot kit . 
 <p align="center">
  <img width="600" height="300" src="https://user-images.githubusercontent.com/60508542/85723938-a2049300-b6eb-11ea-9de5-462864945cb3.png">
</p> 
 
 
**2nd Step of the Project** 
 
 Downloads:
 
- Library iModBot.rar ([4_Files/4-3_Libraries/iModBot.rar](https://github.com/Guilherme010101/iModBot2/blob/master/4_Files/4-3_Libraries/iModBot.rar)) and unzip the file. ![Anotação 2020-06-25 170046](https://user-images.githubusercontent.com/61513539/85755250-ae95e500-b705-11ea-9307-defe1aaa936e.png)

- Arduino IDE software on [pagina do Arduino](https://www.arduino.cc/en/main/software), install the version that suits your equipment, for windows we recommend the option "windows installer, for windows 7 and up". 
 - Bear in mind that the project contents were developed and tested in the Arduino IDE 1.8.12 version, they should continue to be compatible with the most recent versions of this software.
       <p align="center">
  <img width="550" height="300" src="https://user-images.githubusercontent.com/61513539/85758812-91164a80-b708-11ea-947f-1db630270aee.png">
</p> 
       

- ArduBlock java file ([4_Files/4-4_ArduBlock/ArduBlock_20220615.jar](https://github.com/Guilherme010101/iModBot2/blob/master/4_Files/4-4_ArduBlock/ArduBlock_20220615.jar)).

![Anotação 2020-06-25 172512](https://user-images.githubusercontent.com/61513539/85759158-dfc3e480-b708-11ea-9878-04356b2ec291.png)

**3rd Step of the Project**

Read and follow the tutorials to configure the Arduino:
 - Configure Arduino IDE for ESP32; ([3_Documents/3-04_Add_ESP32_Arduino_IDE.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-04_Add_ESP32_Arduino_IDE.pdf)).

 - Configure ArduBlock in Arduino IDE; ([3_Documents/3-05_Add_ArduBlock_Arduino_IDE.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-05_Add_ArduBlock_Arduino_IDE.pdf)).

 - How to install libraries in Arduino IDE. ([3_Documents/3-06_Add_Arduino_IDE_Libraries.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-06_Add_Arduino_IDE_Libraries.pdf)).

# Documentation

After having the Arduino IDE and ArduBlock installed, you can take advantage of the available tutorials. These tutorials teach how to work with the robot and are divided into two categories: tutorials for ArduBlock and tutorials for Arduino IDE.

**ArduBlock documentation**

The [4 levels](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials) below will facilitate and guide how to use each block and how to create a program.

- [Beginner level;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_1_-_Begginer%20Level)

- [Normal level;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_2_-_Normal_Level)

- [Middle level;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_3_-_Intermediate_Level)

- [Advanced level.](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_4_-_Advanced_Level)

There is a set of activities for each level. After reading the documentation of a level, you will be able to carry out the corresponding activity in [2_Activities/2-1_ArduBlock_Activities/](https://github.com/Guilherme010101/iModBot2/tree/master/2_Activities/2-1_ArduBlock_Activities).

**Arduino IDE documentation**

After having done the ArduBock tutorials, you should have a better idea of ​​how to program in the Arduino IDE. We've also designed some tutorials and activities to make learning easier.

- [Tutorial 1 - Movement;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-2_Arduino_IDE_Tutorials/Tutorial_1_-_Movement)

- [Tutorial 2 - Sensors;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-2_Arduino_IDE_Tutorials/Tutorial_2_-_Sensors)

- [Tutorial 3 - Follow path.](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-2_Arduino_IDE_Tutorials/Tutorial_3_-_Follow_Path)

The activities for each tutorial are available at [2_Activities/2-2_Arduino_IDE_Activities/
](https://github.com/Guilherme010101/iModBot2/tree/master/2_Activities/2-2_Arduino_IDE_Activities).


# Edit the ArduBlock

If you are interested in creating a block, you should follow the steps in this folder [4_Files/4-4_ArduBlock/](https://github.com/Guilherme010101/iModBot2/tree/master/4_Files/4-4_ArduBlock).

# Augmented Reality

Using the Unity3d game engine, ROS2 and our robot library, create your virtual world, project it into the real world and watch the robot interact with it.
This functionality is still under development and for now it is still very limited.

# Remote controllers

With the controllers for the popular consoles PS3 and PS4, you can control the robot remotely via bluetooth. The library is easy to install and only needs one program, the Arduino IDE. Simply input desired values into the code, such as steering sensitivity, motors acceleration, maximum speed, and much more!

# Authors
 
- Abel Teixeira   - student at [Polytechnic of Leiria](https://www.ipleiria.pt/cursos/) of the TeSP course in Electronics and Telecommunications Networks, GitHub: [Ab-Tx](https://github.com/Ab-Tx)
- Samuel Lourenço - student at [Polytechnic of Leiria](https://www.ipleiria.pt/cursos/) of the TeSP course in Automation, Robotics and Industrial Maintenance, GitHub: [SamueLourenc0](https://github.com/SamueLourenc0)
- Nelson Henriques - student at [Polytechnic of Leiria](https://www.ipleiria.pt/cursos/) of the TeSP course in Automation, Robotics and Industrial Maintenance, GitHub: [NetchoExtreme](https://github.com/NetchoExtreme)
- Paulo Sousa - student at [Polytechnic of Leiria](https://www.ipleiria.pt/cursos/) of the TeSP course in Electronics and Telecommunications Networks, GitHub [DimitriOnLSD](https://github.com/DimitriOnLSD)
- Guilherme Dias - student at [Polytechnic of Leiria](https://www.ipleiria.pt/cursos/) of the TeSP course in Automation, Robotics and Industrial Maintenance, GitHub [Guilherme010101](https://github.com/Guilherme010101)

## Guided by:
- Luís Conde - [Polytechnic of Leiria](https://www.ipleiria.pt), GitHub: [Luís Conde](https://github.com/conde-ISR-UC-PT)
- Carlos Neves - [Polytechnic of Leiria](https://www.ipleiria.pt), [INESC-Coimbra](http://inescc.estg.ipleiria.pt/), GitHub: [Carlos Neves](https://github.com/carlos-neves)
