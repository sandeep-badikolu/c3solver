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

void setup() {
  //Iniciamos el /baud rate/ de lacomunicación serial para la transmisión de datos
  Serial.begin(9600);

  for(int i = 0; i < 15; i++){
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
    Serial.println("no se hizo la conexión serial");
    delay(1000);
    Serial.println("1");
    delay(1000);
  }
  
  else if(Serial.available() > 0) { // Mientras se reciba algo, añade el paso entrante a la string de solución 
    char pasoEntrante = (char)Serial.read();
    if(pasoEntrante != '1'){
      solution += pasoEntrante;
      Serial.println(pasoEntrante);
    }
    else{
      start = true;
      Serial.println("Se empezarán a hacer los movimientos...");
      delay(2000);
    }
    delay(1000);
    }
  

  else{
    Serial.println("standby");
    delay(2000);
  }
  
  if(start == true){
  for(int i = 0; i < solution.length(); i++){
    switch(solution.charAt(i)){
      case 'R':
      // Definimos la dirección en la que se moverá el motor, en este caso en sentido horario.
        digitalWrite(dirPinR, LOW);
        
        // Nuestro motor tiene un ángulo por paso de 1.8 grados, por lo que si queremos que gire 90 grados dividimos 90/1.8 lo que nos da el total de pasos que es 50.
        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinR, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinR, LOW);
          delayMicroseconds(500);
        }
        Serial.println("R");
        break;
        
      case 'L':
        digitalWrite(dirPinL, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinL, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinL, LOW);
          delayMicroseconds(500);
        }
        Serial.println("L");
        break;
        
      case 'U':
        digitalWrite(dirPinU, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinU, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinU, LOW);
          delayMicroseconds(500);
        }
        Serial.println("U");      
        break;
        
      case 'D':
        digitalWrite(dirPinD, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinD, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinD, LOW);
          delayMicroseconds(500);
        }
        Serial.println("D");      
        break;
        
      case 'F':
        digitalWrite(dirPinF, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinF, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinF, LOW);
          delayMicroseconds(500);
        }
        Serial.println("F");      
        break;
        
      case 'B':
        digitalWrite(dirPinB, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinB, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinB, LOW);
          delayMicroseconds(500);
        }
        Serial.println("B");      
        break;

      case 'r':
        digitalWrite(dirPinR, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinR, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinR, LOW);
          delayMicroseconds(500);
        }
        Serial.println("r");      
        break;
        
      case 'l':
        digitalWrite(dirPinL, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinL, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinL, LOW);
          delayMicroseconds(500);
        }
        Serial.println("l");          
        break;
        
      case 'u':
        digitalWrite(dirPinU, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinU, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinU, LOW);
          delayMicroseconds(500);
        }
        Serial.println("u");      
        break;
        
      case 'd':
        digitalWrite(dirPinD, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinD, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinD, LOW);
          delayMicroseconds(500);
        }
        Serial.println("d");     
        break;
        
      case 'f':
        digitalWrite(dirPinF, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinF, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinF, LOW);
          delayMicroseconds(500);
        }
        Serial.println("f");      
        break;
        
      case 'b':
        digitalWrite(dirPinB, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinB, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinB, LOW);
          delayMicroseconds(500);
        }
        Serial.println("b");      
        break;
      default:
        break;
    }
    }
  }
  
}
