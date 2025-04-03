// define os pinos para os led dos carros
#define CAR_RED 2
#define CAR_YELLOW 3
#define CAR_GREEN 4

// define os pino para os led dos pedestres
#define PED_RED 5
#define PED_GREEN 6

// define o tempo para cada led
#define GREEN_TIME 5000
#define YELLOW_TIME 2000
#define RED_TIME 5000

// configura os pinos dos carros como saída
void setup() {
pinMode(CAR_RED, OUTPUT);
pinMode(CAR_YELLOW, OUTPUT);
pinMode(CAR_GREEN, OUTPUT);
  
  // configurando os pinos dos pedestres como saída
pinMode(PED_RED, OUTPUT);
pinMode(PED_GREEN, OUTPUT);
  
  // inicia o led dos carros verde e o dos pedestres vermelho
digitalWrite(CAR_GREEN, HIGH);
digitalWrite(PED_RED, HIGH);
}

// define o led dos carros pra verde e dos pedestres pra vermelho
void loop() {
digitalWrite(CAR_GREEN, HIGH);
digitalWrite(CAR_YELLOW, LOW);
digitalWrite(CAR_RED, LOW);
digitalWrite(PED_RED, HIGH);
digitalWrite(PED_GREEN, LOW);
delay(GREEN_TIME);
  
  // define o led dos carros pra amarelo
digitalWrite(CAR_GREEN, LOW);
digitalWrite(CAR_YELLOW, HIGH);
delay(YELLOW_TIME);
  
  // define o led dos carros como vermelho e dos pedestres como verde
digitalWrite(CAR_YELLOW, LOW);
digitalWrite(CAR_RED, HIGH);
digitalWrite(PED_RED, LOW);
digitalWrite(PED_GREEN, HIGH);
delay(RED_TIME);}