/*
   Roboyz_ultrassonico.h
   Autora: Luisa Donato
   Setembro de 2019
   descrição...
 
 */

#ifndef Roboyz_ultrassonico
  #define Roboyz_ultrassonico

 class SENSOR_FRONT()
  {
    public:
      SENSOR_FRONT(TIGGER_PIN_SENSOR_FRONT, ECHO_PIN_SENSOR_FRONT, distance_SENSOR_FRONT);
        TIGGER_PIN_SENSOR_FRONT (int pin);
        ECHO_PIN_SENSOR_FRONT (int pin);
       
    private:
      _distance_SENSOR_FRONT (float cm); //distancia em cm entre o objeto e o sensor frontal
  };

  class SENSOR_REAR()
  {
    public:
      SENSOR_REAR(TIGGER_PIN_SENSOR_REAR, ECHO_PIN_SENSOR_REAR, _distance_SENSOR_REAR);
        TIGGER_PIN_SENSOR_REAR (int pin);
        ECHO_PIN_SENSOR_REAR (int pin);
       
    private:
      _distance_SENSOR_REAR (float cm); //distancia em cm entre objeto e o sensor traseiro 
  };

 
 class Robot.addCollisionEnvet()
  {
    public:
      Robot.addCollisionEvent(void INDEX_OF_SENSOR, float MIN_DISTANCE, void DEFINED_FUNCION);
        void update (); //fica no loop verificando todas as funções
        void begin(int BaudRate);
        void DEFINED_FUNCTION [ColisaoFrente, ColisaoTraseira]; //efetua a função criada pelo usuário para colisões, tanto frontal quanto traseira 
        void (*FRONT_COLIISION) (void) = 0; //evento da colisão frontal
        void (*REAR_COLLISION) (void) = 0; //evento da colisão traseira
        float MIN_DISTANCE (cm); //distancia mínima para a função ser efetuada 
              
            
    private:
      void INDEX_OF_SENSOR [SENSOR_FRONT, SENSOR_REAR]; //verifica se o sensor frontal ou traserio foi o acionado 
  };

#endif
