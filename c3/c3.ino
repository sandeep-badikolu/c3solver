// Definición de los pines para controlar los motores.
// Conexiones para el arduino nano/uno
const int stepPinR = 13;
const int stepPinL = 11;
const int stepPinU = 9;
const int stepPinD = 7;
const int stepPinF = 5;
const int stepPinB = 3;

const int dirPinR = 12;
const int dirPinL = 10;
const int dirPinU = 8;
const int dirPinD = 6;
const int dirPinF = 4;
const int dirPinB = 2;
// Variable para guardar los pasos recibidos
String solution = "";

// Flag para que inicie los movimientos 
boolean start = false;

void giro(int pin){
  for(int i = 0; i < 50; i++){
    digitalWrite(pin, HIGH);
    delay(10);
    digitalWrite(pin, LOW);
    delay(10);
  }
}

void setup() {
  //Iniciamos el /baud rate/ de lacomunicación serial para la transmisión de datos
  Serial.begin(9600);

  for(int i = 0; i < 5; i++){
    Serial.println("1");
    delay(1000);
  }
  
  //Definimos los pins de cada motor como salidas
  pinMode(stepPinR, OUTPUT);
  pinMode(dirPinR, OUTPUT);
  pinMode(stepPinL, OUTPUT);
  pinMode(dirPinL, OUTPUT);
  pinMode(stepPinU, OUTPUT);
  pinMode(dirPinU, OUTPUT);
  pinMode(stepPinD, OUTPUT);
  pinMode(dirPinD, OUTPUT);
  pinMode(stepPinF, OUTPUT);
  pinMode(dirPinF, OUTPUT);
  pinMode(stepPinB, OUTPUT);
  pinMode(dirPinB, OUTPUT);
}

void loop() {
  if(Serial.available() == false){
    Serial.println("standby");
    delay(2000);
  }
  else if(Serial.available() > 0) { // Mientras se reciba algo, añade el paso entrante a la string de solución 
    char pasoEntrante = (char)Serial.read();
    if(pasoEntrante != '1'){
      solution += pasoEntrante;
      Serial.println(pasoEntrante);
    }
    else{
      start = true;
      Serial.println("Se empezaran a hacer los movimientos...");
      delay(1000);
    }
  }

  if(start == true){
    Serial.println(solution);
    for(int i = 0; i < solution.length(); i++){
      switch(solution.charAt(i)){
        case 'R':
          digitalWrite(dirPinR, LOW);
          giro(stepPinR);
          Serial.println("R");
          break;
          
        case 'L':
          digitalWrite(dirPinL, HIGH);
          giro(stepPinL);
          Serial.println("L");
          break;
          
        case 'U':
          digitalWrite(dirPinU, LOW);
          giro(stepPinU);
          Serial.println("U");      
          break;
          
        case 'D':
          digitalWrite(dirPinD, HIGH);
          giro(stepPinD);
          Serial.println("D");      
          break;
          
        case 'F':
          digitalWrite(dirPinF, LOW);
          giro(stepPinF);
          Serial.println("F");      
          break;
          
        case 'B':
          digitalWrite(dirPinB, HIGH);
          giro(stepPinB);
          Serial.println("B");      
          break;
  
        case 'r':
          digitalWrite(dirPinR, HIGH);
          giro(stepPinR);
          Serial.println("r");      
          break;
          
        case 'l':
          digitalWrite(dirPinL, LOW);
          giro(stepPinL);
          Serial.println("l");          
          break;
          
        case 'u':
          digitalWrite(dirPinU, HIGH);
          giro(stepPinU);
          Serial.println("u");      
          break;
          
        case 'd':
          digitalWrite(dirPinD, LOW);
          giro(stepPinD);
          Serial.println("d");     
          break;
          
        case 'f':
          digitalWrite(dirPinF, HIGH);
          giro(stepPinF);
          Serial.println("f");      
          break;
          
        case 'b':
          digitalWrite(dirPinB, LOW);
          giro(stepPinB);
          Serial.println("b");      
          break;
        default:
          break;
      }
      int limit = solution.length() - 1; 
      if(i == limit) start = false;
      }
  }
}
