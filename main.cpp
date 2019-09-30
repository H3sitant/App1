#include <Arduino.h>
#include <LibRobus.h>

float PID();

void Avancer(float Distance,float pid);
void Tourner(int Direction, int Rotation);
float speed=0.25;

void setup() {
  // put your setup code here, to run once:
  	Serial.begin(9600);
    delay(5000);
    BoardInit();
}

void loop() {
  float pid = PID();
  // put your main code here, to run repeatedly:
  Avancer( 113,pid); //Appel de la fonction pour aller tout droit
  Tourner ( 1, 90); // Appel de la fonction pour tourner à gauche 900
  Avancer( 72 ,pid ); //Appel de la fonction pour aller tout droit
  Tourner (0, 90 ); // Appel de la fonction pour tourner à droite 900
  Avancer(83.5,pid); //Appel de la fonction pour aller tout droit
  Tourner (0, 45 ); // Appel de la fonction pour tourner à droite 450
  Avancer(163,pid); //Appel de la fonction pour aller tout droit
  Tourner ( 1,90); // Appel de la fonction pour tourner à gauche 900
  Avancer(62.5,pid); //Appel de la fonction pour aller tout droit
  Tourner (0, 45 ); // Appel de la fonction pour tourner à droite 450
  Avancer (120,pid); //Appel de la fonction pour aller tout droit
  
}
 void Avancer(float Distance,float pid)
 {
     
    float pulsion = Distance/23.9389;
    pulsion=pulsion*3200;
    int32_t pulsion_R;
  MOTOR_SetSpeed(0, speed);
  MOTOR_SetSpeed(1, pid);
  pulsion_R=ENCODER_Read(0);
   while(pulsion_R<pulsion)
  {
      pulsion_R=ENCODER_Read(0);
  }
  MOTOR_SetSpeed(0, 0);
  MOTOR_SetSpeed(1, 0);
  delay(2000);
 }

 void Tourner(int Direction, int Rotation)
 {
  ENCODER_ReadReset(0);
  ENCODER_ReadReset(1);
  float tampon;
  tampon =2*3.14*18.350*Rotation/360;
  float pulsion = tampon/23.9389;
  pulsion=pulsion*3200;
  int32_t pulsion_R;
  MOTOR_SetSpeed(Direction, speed);
  pulsion_R=ENCODER_Read(Direction);
  while(pulsion_R<pulsion)
  {
      pulsion_R=ENCODER_Read(Direction);
  }
  MOTOR_SetSpeed(Direction, 0);
  ENCODER_ReadReset(0);
  ENCODER_ReadReset(1);
  delay(2000);
 }
 float PID()
 {
  float pid = 0;
  float Kp = 0.001;
  float Ki = 1;
  float Erreur = 0;
  float sec = 7000;
  int encodeur_0 = ENCODER_Read(0);
  int encodeur_1 = ENCODER_Read(1);
  Erreur = encodeur_0 - encodeur_1;
  Serial.println(Erreur);
  pid = (Erreur * Kp) + ((Erreur*Ki)/sec) + speed;
  Serial.println(pid);
  pid=speed;
  return pid;
 }