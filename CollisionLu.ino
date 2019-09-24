#include <RobotLib.h>

RobotLib Robot;

void ColisaoFrente(double distance) 
{
  Serial.print("Colisao na frente: distancia ");
  Serial.println(distance);
}

void ColisaoTraseira(double distance) 
{
  Serial.print("Colisao na traseira: distancia ");
  Serial.println(distance);
}



void setup()
{
  Serial.begin(115200);
  Robot.begin();
  Robot.FRONT_COLLISION = ColisaoFrente;
  Robot.REAR_COLLISION = ColisaoTraseira;

  /**********************************************
  funtion name: addCollisionEnvet
  param 1: Index of sensor [SENSOR_FRONT,SENSOR_REAR]
  Param 2: Minimum distance collision in cm
  Param 3: User defined function
  ***********************************************/
  Robot.addCollisionEnvet(SENSOR_FRONT, 5, &ColisaoFrente);
}

void loop()
{
  Robot.update();
}
