/*
   Roboyz_ultrassonico.cpp
   Autora: Luisa Donato
   Setembro de 2019
   descrição...
 
 */
#include " Roboyz_ultrassonico.h"
#include "Arduino.h"

SENSOR_FRONT :: SENSOR_FRONT(TIGGER_PIN_SENSOR_FRONT, ECHO_PIN_SENSOR_FRONT, distance_SENSOR_FRONT)
{
  TIGGER_PIN_SENSOR_FRONT (int, IMPUT);
  ECHO_PIN_SENSOR_FRONT (int, IMPUT);
}

SENSOR_REAR :: SENSOR_REAR(TIGGER_PIN_SENSOR_REAR, ECHO_PIN_SENSOR_REAR, _distance_SENSOR_REAR)
{
  TIGGER_PIN_SENSOR_REAR (int, IMPUT);
  ECHO_PIN_SENSOR_REAR (int, IMPUT);
}


Robot.addCollisionEvent :: Robot.addCollisionEvent(void INDEX_OF_SENSOR, float MIN_DISTANCE, void DEFINED_FUNCION)
{
  
}

void Robot.addCollisionEvent :: INDEX_OF_SENSOR [SENSOR_FRONT, SENSOR_REAR]
{
  if (distance_SENSOR_FRONT < MIN_DISTANCE)
    INDEX_OF_SENSOR = SENSOR_FRONT
  else if (distance_SENSOR_REAR < MIN_DISTANCE)
    INDEX_OF_SENSOR = SENSOR_REAR
  else if (distance_SENSOR_FRONT < MIN_DISTANCE && distance_SENSOR_REAR < MIN_DISTANCE)
    Serial.println("Erro");
}

void Robot.addCollisionEvent :: DEFINED_FUNCTION [ColisaoFrente, ColisaoTraseira]
{
  ColisaoFrente = FRONT_COLLISION
  ColisaoTraseira = REAR_COLLISION
  
    if (INDEX_OF_SENSOR = SENSOR_FRONT)
      DEFINED_FUNCION = FRONT_COLLISION
    else if (INDEX_OF_SENSOR = SENSOR_REAR)
      DEFINED_FUNCION = REAR_COLLISION
}

void Robot.addCollisionEvent :: update ()
{
    if (distance_SENSOR_FRONT < MIN_DISTANCE || distance_SENSOR_REAR < MIN_DISTANCE)
    {
      switch (DEFINED_FUNCTION)
      {
        case "distance_SENSOR_FRONT < MIN_DISTANCE" :
          FRONT_COLLISION;
        case "distance_SENSOR_REAR < MIN_DISTANCE" :
          REAR_COLLISION;
      } 
    }      
}

void Robot.addCollisionEvent :: begin(int BaudRate)
{
  Serial.begin (BaudRate);
}
