# Augmented Reality

Using the Unity3d game engine, ROS2 and our robot library, create your virtual world, project it into the real world and watch the robot interact with it.

This functionality is still under development and for now it is still very limited.

## Requirements

 - Ubuntu 20.04 (Native ou Virtual)
 - Consult the document [Tutorial_SetUp_VM](https://github.com/Guilherme010101/iModBot2/blob/master/5_Augmented_Reality/Tutorial_SetUp_VM.pdf) to install it on a Virtual Machine (native installation is recommended).
 
 - Docker  
 - Consult the document [Tutorial_docker](https://github.com/Guilherme010101/iModBot2/blob/master/5_Augmented_Reality/Tutorial_docker.pdf) to install it and understand how it works.


## Utilization

1. Abre um terminal na pasta [iModBot-Docker](https://github.com/Guilherme010101/iModBot2/tree/master/5_Augmented_Reality/iModBot-Docker).
   
2. Cria a imagem Docker (este passo demora algum tempo).
    ```bash
    $ ./build-docker-image.bash
    ```
3. Inicia a imagem criada.
    ```bash
    $ ./run-docker-container
    ```
4.  Abre o `VScode`.
    ```bash
    $ code
    ```
	  --  Instala a  extensão PlatformIO e abre a pasta [VScode_Workspace\ESP32-ROS2_iModBot](https://github.com/Guilherme010101/iModBot2/tree/master/5_Augmented_Reality/iModBot-Docker/VScode_Workspace/ESP32-ROS2_iModBot), coloca o id e a palavra pass da tua rede Wifi e o IP do container.
	  -- Faz Upload do programa para o ESP32.
	  -- Guarda as alterações e fecha o VScode.
    
5. Inicia o `Unity Hub` e instala o editor mais recente e abre o projeto que se encontra na pasta [iModBot-Docker\Unity_Workspace](https://github.com/Guilherme010101/iModBot2/tree/master/5_Augmented_Reality/iModBot-Docker/Unity_Workspace/iModBot-UnityRos2).
    ```bash
    $ cd unity && ./UnityHub.AppImage
    ```
6.  Inicia o ROS2 Node.
- No terminal da maquina nativa que se encontra na pasta iModBot-Docker abre um novo terminal no container.
    ```bash
    $ ./new_bash_in_container
    ```
 - No novo terminal:
    ```bash
    $ cd work/ROS2_Workspace && . install/setup.bash && ros2 run stop_oncollision oncollision
    ```
7. Inicia o controlo remoto (pode ser acedido em qualquer browser desde que esteja na rede local, através do IP que aparece na janela).
- Abre 2 novos terminais no container, como descrito anteriormente.
- No 1º:
    ```bash
    $ cd ros2-web-bridge && export DEBUG=ros2-web-bridge:* && node bin/rosbridge.js
    ```
- No 2º:
    ```bash
    $ cd ros2-web-bridge/demo && http-server -c-1
    ```
 
8. Inicia o MicroXRCEAgent (responsável por estabelecer a comunicação entre o ROS2 e o ESP32) 
- Abre um novo terminal no container.
- Inicia o programa
    ```bash
    $ MicroXRCEAgent udp4 -p 2018
    ```
Está tudo a postos para comecares a tua jornada com a realidade aumentada.
Sempre que quiseres reabrir o container corre o script [start-docker-container](https://github.com/Guilherme010101/iModBot2/blob/master/5_Augmented_Reality/iModBot-Docker/start-docker-container.bash).

Video demostrativo: [https://youtu.be/DlAx3p5d99E](https://youtu.be/DlAx3p5d99E)
