//Definicao pinos leds
int pinoled_r = 3;
int pinoled_g= 4;
int pinoled_b = 5;

//Definicao pinos sensor
int pino_analogico = A5;
int valor_A0 = 0;
int valor_D = 0;

int r, g, b;

void setup()
{
  Serial.begin(9600);
  //Define pinos led como saida
  pinMode(pinoled_r, OUTPUT);
  pinMode(pinoled_g, OUTPUT);
  pinMode(pinoled_b, OUTPUT);
  
  //Define pinos sensor como entrada
  pinMode(pino_analogico, INPUT);
}

void loop()
{
  valor_A0 = analogRead(pino_analogico);
  
  Serial.print("Analogico  ");
  Serial.print(valor_A0);
  Serial.print("\n");
  
  
  //Intensidade baixa
  if(valor_A0 < 200)
  {
  digitalWrite(pinoled_r, LOW);
  digitalWrite(pinoled_g, LOW);
  digitalWrite(pinoled_b,LOW);
  }
  
  if (valor_A0 > 201 && valor_A0 < 210)
  {
    digitalWrite(pinoled_r, HIGH);
    digitalWrite(pinoled_g, LOW);
    digitalWrite(pinoled_b, LOW);
  }
  

  //Intensidade media
  if (valor_A0 > 211 && valor_A0 < 215)
  {
    digitalWrite(pinoled_r, HIGH);
    digitalWrite(pinoled_g,HIGH);
    digitalWrite(pinoled_b,LOW);
  }

  //Intensidade alta
  if (valor_A0> 216 && valor_A0 <500)
  {
    digitalWrite(pinoled_r, HIGH);
    digitalWrite(pinoled_g, HIGH);
    digitalWrite(pinoled_b, HIGH);
  }

}
