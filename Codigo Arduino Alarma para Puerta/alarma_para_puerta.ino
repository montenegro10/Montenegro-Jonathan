//--------------------------------------------------
//Declara puertos de entradas y salidas y variables
//--------------------------------------------------
int contacto = 2; //Pin asignado al reed switch
const int led_naranja = 8;
const int led_rojo = 9;
const int led_azul = 10;
//------------------------------------
//Funcion principal
//------------------------------------
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
 pinMode(contacto,INPUT); //El reed switch como una entrada
 pinMode(led_naranja, OUTPUT); //El LED como una salida
 pinMode(led_rojo, OUTPUT); //El LED como una salida
 pinMode(led_azul, OUTPUT); //El LED como una salida
}
//------------------------------------
//Funcion ciclicla
//------------------------------------
void loop() // Esta funcion se mantiene ejecutando
{
 // Si el iman se acerca al reed switch
 if (digitalRead(contacto)==LOW){
 //Mantiene apagados los leds
  digitalWrite(led_naranja,LOW); 
  digitalWrite(led_rojo,LOW); 
  digitalWrite(led_azul,LOW); 
 // Si el iman esta lejos del reed switch
 }else{
 //Alarma encendida
  for(int a=0; a<10; a++){
 digitalWrite(led_naranja,HIGH); //Prende el LED
 delay(50); //Tiempo
 digitalWrite(led_naranja,LOW); //Apaga el LED
 delay(50); //Tiempo
 digitalWrite(led_rojo,HIGH); //Prende el LED
 delay(50); //Tiempo
 digitalWrite(led_rojo,LOW); //Apaga el LED
 delay(50); //Tiempo
 digitalWrite(led_azul,HIGH); //Prende el LED
 delay(50); //Tiempo
 digitalWrite(led_azul,LOW); //Apaga el LED
 delay(50); //Tiempo*/
 } 
 
 }
 }
//Fin del programa
