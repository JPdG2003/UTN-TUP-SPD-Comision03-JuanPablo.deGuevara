int Led_Pin = 3;
int Fot_Pin = A0;
int Int_Pin = 2;
int sensorValue = 0;
int inputValue = 0;
// Variables de Temperatura
int readValue = 0;
int lastValue = 1;
int tempPin = A1;
float voltsValue;
float tempValue;
int counter = 0;
int start = 0;
int stop = 0;
// Limites Invierno
int start1 = 18;
int stop1 = 24;
// Limites Verano
int start2 = 20;
int stop2 = 1;
void setup()
{
Serial.begin(9600);
pinMode(Led_Pin, OUTPUT);
pinMode(Int_Pin, INPUT);
}