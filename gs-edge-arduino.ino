const int analogIn = A0;
int humiditysensorOutput = 0;
//Definindo Variaveis
int RawValue= 0;
double Voltage = 0;
double tempC = 0;
double tempF = 0;

void setup(){  
  Serial.begin(9600);
  pinMode(A1, INPUT);//Defini o A1 como entrada(input)
}

void loop(){
  RawValue = analogRead(analogIn);//Lê o A0 como variavel 
  Voltage = (RawValue / 1023.0) * 5000; //5000 para transformar em milivolts 
  tempC = (Voltage-500) * 0.1; //Coonta para transformar em C
  tempF = (tempC * 1.8) + 32;  //Convertendo para F
  //Escrevendo no monitor serial 
  Serial.print("Temperatura em C = ");
  Serial.print(tempC,1);
  Serial.print("  Temperatura em F = ");
  Serial.println(tempF,1);
  humiditysensorOutput = analogRead(A1);
  Serial.print("Humidade: ");
  Serial.print(map(humiditysensorOutput, 0, 1023, 10, 70));
  Serial.println("%");

  delay(1000);  // Espera de 1 segundo antes de refazer o loop

}