
//incluimos la libreria
#include <Ultrasonic.h>

/*ESQUEMA DE CONEXION
  *Utilizando un sensor HC-SR04 deben conectarse los pines de los extremos a (+) y (-)
  *y los dos pines del centro deben conectarse a los pines de la placa.
  *TRIG al pin 13
  *HECHO al pin 12
  */ 
  
  
 int echo = 12;
 int trig = 13;
 int distanciamax = 30000; //esta es la distancia maxima que quiero medir, 30000 microsegundos son equivalentes a 5 metros

 
 /*creo el sensor y le paso los datos de configuracion.
 */
 Ultrasonic sensor(trig,echo,distanciamax);
 int distancia = 0; //declaro e inicializo la variable que voy a utilizar para almacenar la distancia medida

 


 void setup() { //en la funcion setup escrio el codigo que quiero que se ejecute solo 1 vez al iniciar el sistema
 Serial.begin(9600);//inicializo el puerto serie

} 


void loop() {  // en la funcion loop escribo el codigo que quiero que se reoita constantemente 
  distancia = sensor.Ranging(CM); //medimos la distancia y la guardamos en la variabe 
  Serial.println(distancia);//imprimo distancia en el monitor serial
  delay(50); //espero 50 ms entre cada vez que imprimo la distancia 





}
