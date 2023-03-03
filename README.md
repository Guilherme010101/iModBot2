
# Apresentação do Projeto 
Este projeto iModBot consiste num robô modular de baixo custo que pode ser programado através de liguagem de programação por blocos e/ou através de linguagem C/C++. Este projeto dispõe de uma biblioteca para facilitar o controlo do robô. 

A programação por blocos divide-se em 4 níveis, para facilitar a aprendizagem do utilizadores. Os níveis são os seguintes:
 - Nível Iniciante -> É possível colocar o robô a efetuar uma terefa com 1 a 2 blocos.
 - Nível Normal -> O utilizador tem mais controlo sob o movimento do robô, dispõe apenas da função loop.
 - Nível Médio -> O utilizador pode agora colocar blocos na função Setup e Loop.
 - Nível Avançado -> O utilizador dispõe de todas as funções da biblioteca e necessita de configurar todos os aspetos do robô.
    
![ROBOT](https://user-images.githubusercontent.com/61513539/82364254-f0e14d80-9a06-11ea-9d6f-fb408e07dd22.jpg)

# Como transferir ficheiros do GitHub
No GitHub não é possível transferir qualquer ficheiro individualmente. É recomendado transferir todas as pastas e ficheiros presentes neste projeto. Para tal siga as instruções abaixo:

Comece por transferir todos os ficheiros no formato .zip
![](https://user-images.githubusercontent.com/60508542/85849029-1b5ebd00-b7a2-11ea-8346-0e61bc6c73ff.png)

Abra a localização do ficheiro .zip transferido e use um programa para extrair os conteudos
![](https://user-images.githubusercontent.com/60508542/85849135-506b0f80-b7a2-11ea-86b6-15204e42a5db.png)

Por fim irá obter um conjunto de pastas e ficheiros organizados da mesma maneira que se encontram neste repositório.

![](https://user-images.githubusercontent.com/60508542/85849176-61b41c00-b7a2-11ea-9cf0-36eb9aabff0b.png)

# Elaboração do Projeto
**1º Passo do Projeto**

Para montar o robô basta seguir o documento 4_Guia_de_montagem_offline ([3-03_iModBot_Offline_Assembly_Guide.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-03_iModBot_Offline_Assembly_Guide.pdf)) que mostra como montar ou então assistir o video [iModBot@ipleiria.pt guia de montagem](https://www.youtube.com/watch?v=i4wFh0GqzkM&feature=emb_logo). Este documento também inclui uma listagem de componentes
que serão necessários para a sua montagem. Para perceber melhor o que faz cada componente do robô pode ler o manual técnico ([3-01_iModBot_Tech_Manual.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-01_iModBot_Tech_Manual.pdf)) que explica vários aspetos do robô. 

Lista de material:
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
 
 
**2º Passo do Projeto** 
 
 Downloads:
 
- Biblioteca iModBot.zip ([4_Files/4-3_Libraries/iModBot.rar](https://github.com/Guilherme010101/iModBot2/blob/master/4_Files/4-3_Libraries/iModBot.rar)) e descompacta o ficheiro. ![Anotação 2020-06-25 170046](https://user-images.githubusercontent.com/61513539/85755250-ae95e500-b705-11ea-9307-defe1aaa936e.png)

- Software Arduino IDE na [pagina do Arduino](https://www.arduino.cc/en/main/software), instale a versão que se adequa ao seu equipamento, para windows recomendamos a opção "Windows installer, for windows 7 and up". 
 -- Tenha em atenção que os conteudos do projeto foram desenvolvidos e testados na versão Arduino IDE 1.8.12, os mesmos deverão continuar ser compatíveis com as versões mais recentes deste software.
       <p align="center">
  <img width="550" height="300" src="https://user-images.githubusercontent.com/61513539/85758812-91164a80-b708-11ea-947f-1db630270aee.png">
</p> 
       

- Ficheiro java do ArduBlock ([4_Files/4-4_ArduBlock/ArduBlock_20220615.jar](https://github.com/Guilherme010101/iModBot2/blob/master/4_Files/4-4_ArduBlock/ArduBlock_20220615.jar)).

![Anotação 2020-06-25 172512](https://user-images.githubusercontent.com/61513539/85759158-dfc3e480-b708-11ea-9878-04356b2ec291.png)

**3º Passo do Projeto**

Ler e seguir os tutoriais para configurar o Arduíno:
 - Configurar Arduíno IDE para o ESP32; ([3_Documents/3-04_Add_ESP32_Arduino_IDE.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-04_Add_ESP32_Arduino_IDE.pdf))

 - Configurar ArduBlock no Arduíno IDE; ([3_Documents/3-05_Add_ArduBlock_Arduino_IDE.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-05_Add_ArduBlock_Arduino_IDE.pdf))

 - Como instalar bibliotecas no Arduíno IDE. ([3_Documents/3-06_Add_Arduino_IDE_Libraries.pdf](https://github.com/Guilherme010101/iModBot2/blob/master/3_Documents/3-06_Add_Arduino_IDE_Libraries.pdf))

# Documentação

Após ter o Arduino IDE e o ArduBlock instalados pode usufruir dos tutoriais disponibilizados. Estes tutoriais ensinam a trabalhar com o robô sendo os mesmos divididos em duas categorias: tutoriais para ArduBlock e tutoriais para Arduino IDE.

**Documentação do ArduBlock**

Os [4 níveis](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials) a baixo irão facilitar e guiar como deve de utilizar cada bloco e como criar um programa.

- [Nivel Iniciante;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_1_-_Begginer%20Level)

- [Nivel Normal;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_2_-_Normal_Level)

- [Nivel Médio;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_3_-_Intermediate_Level)

- [Nivel Avançado;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-1_ArduBlock_Tutorials/Tutorial_4_-_Advanced_Level)

Existe um conjunto de atividades para cada nível. Após ler a documentação de um nível poderá realizar a atividade correspondente  ao mesmo em [2_Activities/2-1_ArduBlock_Activities/](https://github.com/Guilherme010101/iModBot2/tree/master/2_Activities/2-1_ArduBlock_Activities).

**Documentação do Arduino IDE**

Depois de já ter realizado os tutoriais do ArduBock deverá ter uma noção melhor de como programar no Arduino IDE. Também elaboramos alguns tutoriais e atividades para facilitar a aprendizagem,

- [Tutorial 1 - Movimento;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-2_Arduino_IDE_Tutorials/Tutorial_1_-_Movement)

- [Tutorial 2 - Sensores;](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-2_Arduino_IDE_Tutorials/Tutorial_2_-_Sensors)

- [Tutorial 3 - Seguir trajeto.](https://github.com/Guilherme010101/iModBot2/tree/master/1_Tutorials/1-2_Arduino_IDE_Tutorials/Tutorial_3_-_Follow_Path)

As atividades para cada tutorial estão disponíveis em [2_Activities/2-2_Arduino_IDE_Activities/
](https://github.com/Guilherme010101/iModBot2/tree/master/2_Activities/2-2_Arduino_IDE_Activities).


# Editar o ArduBlock

Caso tenha interesse em criar um bloco deve seguir os passos neste pasta [4_Files/4-4_ArduBlock/](https://github.com/Guilherme010101/iModBot2/tree/master/4_Files/4-4_ArduBlock)

# Realidade Aumentada

Utilizando o motor de jogos Unity3d, ROS2 e a nossa biblioteca para o robô, cria o teu mundo virtual, projeta-o no mundo real e vê o robô a interagir com ele.
Esta funcionalidade ainda está em desenvolvimento sendo que por agora ainda é muito limitada. 

# Controladores remotos

Com os controladores das consolas populares PS3 e PS4, consegue controlar o robot à distância via bluetooth. A biblioteca é fácil de instalar e apenas necessita de um programa, o Arduino IDE. Basta colocar valores desejados no código, tanto como sensibilidade de direção, aceleração dos motores, velocidade máxima, e muito mais!

# Autores
 
- Abel Teixeira   - estudante do [Politécnico de Leiria](https://www.ipleiria.pt/cursos/) do curso TeSP em Eletrónica e Redes de Telecomunicações, GitHub: [Ab-Tx](https://github.com/Ab-Tx)
- Samuel Lourenço - estudante do [Politécnico de Leiria](https://www.ipleiria.pt/cursos/) do curso TeSP em Automação, Robótica e manutenção Industrial, GitHub: [SamueLourenc0](https://github.com/SamueLourenc0)
- Nelson Henriques - estudante do [Politécnico de Leiria](https://www.ipleiria.pt/cursos/) do curso TeSP em Automação, Robótica e manutenção Industrial, GitHub: [NetchoExtreme](https://github.com/NetchoExtreme)
- Paulo Sousa - estudante do [Politécnico de Leiria](https://www.ipleiria.pt/cursos/) do curso TeSP em Eletrónica e Redes de Telecomunicações, GitHub [DimitriOnLSD](https://github.com/DimitriOnLSD)

## Orientado por:
- Luís Conde - [Politécnico de Leiria](https://www.ipleiria.pt), GitHub: [Luís Conde](https://github.com/conde-ISR-UC-PT)
- Carlos Neves - [Politécnico de Leiria](https://www.ipleiria.pt), [INESC-Coimbra](http://inescc.estg.ipleiria.pt/), GitHub: [Carlos Neves](https://github.com/carlos-neves)
