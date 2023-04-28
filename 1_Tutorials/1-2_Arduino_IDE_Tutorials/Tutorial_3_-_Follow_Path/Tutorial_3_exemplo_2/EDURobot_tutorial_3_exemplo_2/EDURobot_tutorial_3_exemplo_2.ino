#include <iModBot.h>
iModBot robot;

void setup()
 
{
  robot.begin();
  Serial.begin(115200);
}

void loop() 

{
  if ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 0) && (robot.readS4() == 1) && (robot.readS5() == 1))   
  { 
    robot.forward(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 0) && (robot.readS4() == 1) && (robot.readS5() == 1))
    {
      ;
    }
  }
  
  else if ((robot.readS1() == 1) && (robot.readS2() == 0) && (robot.readS3() == 1) && (robot.readS4() == 1) && (robot.readS5() == 1))
  {
    robot.rotateLeft(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 0) && (robot.readS3() == 1) && (robot.readS4() == 1) && (robot.readS5() == 1))
    {
      ;
    } 
  }
  
  else if ((robot.readS1() == 0) && (robot.readS2() == 1) && (robot.readS3() == 1) && (robot.readS4() == 1) && (robot.readS5() == 1))
  {
    robot.rotateLeft(110);
    while ((robot.readS1() == 0) && (robot.readS2() == 1) && (robot.readS3() == 1) && (robot.readS4() == 1) && (robot.readS5() == 1))
    {
      ;
    }
  }
  
  else if ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 1) && (robot.readS4() == 0) && (robot.readS5() == 1))
  {
    robot.rotateRight(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 1) && (robot.readS4() == 0) && (robot.readS5() == 1))
    {
      ;
    }
  }
  
  else if ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 1) && (robot.readS4() == 1) && (robot.readS5() == 0))
  {
    robot.rotateRight(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 1) && (robot.readS4() == 1) && (robot.readS5() == 0))
    {
      ;
    }
  }
  
  else if ((robot.readS1() == 1) && (robot.readS2() == 0) && (robot.readS3() == 0) && (robot.readS4() == 1) && (robot.readS5() == 1))
  {
    robot.rotateLeft(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 0) && (robot.readS3() == 0) && (robot.readS4() == 1) && (robot.readS5() == 1))
    {
      ;
    }
  }
  
  else if ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 0) && (robot.readS4() == 0) && (robot.readS5() == 1))
  {
    robot.rotateRight(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 0) && (robot.readS4() == 0) && (robot.readS5() == 1))
    {
      ;
    }
  }
  
  else if ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 0) && (robot.readS4() == 0) && (robot.readS5() == 0))
  {
    robot.rotateRight(110);
    while ((robot.readS1() == 1) && (robot.readS2() == 1) && (robot.readS3() == 0) && (robot.readS4() == 0) && (robot.readS5() == 0))
    {
      ;
    }
  }

  else if ((robot.readS1() == 0) && (robot.readS2() == 0) && (robot.readS3() == 0) && (robot.readS4() == 1) && (robot.readS5() == 1))
  {
    robot.rotateLeft(110);
    while ((robot.readS1() == 0) && (robot.readS2() == 0) && (robot.readS3() == 0) && (robot.readS4() == 1) && (robot.readS5() == 1))
    {
      ;
    }
  }
  
  else if (((robot.readS1() == 0) && (robot.readS2() == 0) && (robot.readS3() == 0) && (robot.readS4() == 0) && (robot.readS5() == 0)) || (robot.readCLP() == 1) || (robot.distance() <= 10))
  {
      robot.stopMotors();
  }

}
