// Liberia para LCD
#include <LiquidCrystal.h>
// Configuramos LCD (Pines Entre Arduino y LCD)
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int contador = 0;
int lectura = 0;
int distancia = 0;
void setup() {
// Inicializamos LCD
lcd.begin(16, 2);
//
lcd.print("Iniciando");
// Indicamos Linea en LCD
lcd.setCursor(0, 1);
lcd.print("Sistema");
delay(1000);
// Limpiamos LCD
lcd.clear();
delay(1000);
lcd.print("Iniciando");
lcd.setCursor(0, 1);
lcd.print("Sistema");
delay(1000);
lcd.clear();
lcd.print("Distancia");
lcd.setCursor(0, 1);
lcd.print("cm:");
}
void loop() {
// Tomar Lectura
lectura = readUltrasonicDistance(7, 7);
// Calcular Distancia
distancia = 0.01723 * lectura;
delay(100); // Demora de 100ms
lcd.setCursor(3, 1);
lcd.print(distancia);
delay(1000);
}
long readUltrasonicDistance(int triggerPin, int echoPin)
{
// Inicializar Sensor
pinMode(triggerPin, OUTPUT);
digitalWrite(triggerPin, LOW);
delayMicroseconds(2);
digitalWrite(triggerPin, HIGH);
delayMicroseconds(10);
digitalWrite(triggerPin, LOW);
// Iniciar Sensor en Modo Lectura
pinMode(echoPin, INPUT);
// Retornar Lectura
return pulseIn(echoPin, HIGH);
}