// Definición de los pines para controlar los motores.

const int stepPinR = 22;
const int stepPinL = 28;
const int stepPinU = 34;
const int stepPinD = 40;
const int stepPinF = 46;
const int stepPinB = 52;

const int dirPinR = 23;
const int dirPinL = 29;
const int dirPinU = 35;
const int dirPinD = 41;
const int dirPinF = 47;
const int dirPinB = 53;

// Variable para guardar los datos recibidos
char datos = 0;

void setup() {
  //Iniciamos el /baud rate/ de lacomunicación serial para la transmisión de datos
  Serial.begin(9600);
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
  if(Serial.available() > 0) {
    datos = Serial.read();
    Serial.print(datos);
    Serial.print("\n");
    
    switch(datos){
      case 'R':
      // Definimos la dirección en la que se moverá el motor, en este caso en sentido horario.
        digitalWrite(dirPinR, HIGH);
        // Nuestro motor tiene un ángulo por paso de 1.8 grados, por lo que si queremos que gire 90 grados dividimos 90/1.8 lo que nos da el total de pasos que es 50.
        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinR, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinR, LOW);
          delayMicroseconds(500);
        }
        break;
        
      case 'L':
        digitalWrite(dirPinL, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinL, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinL, LOW);
          delayMicroseconds(500);
        }
        break;
        
      case 'U':
        digitalWrite(dirPinU, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinU, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinU, LOW);
          delayMicroseconds(500);
        }      
        break;
        
      case 'D':
        digitalWrite(dirPinD, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinD, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinD, LOW);
          delayMicroseconds(500);
        }      
        break;
        
      case 'F':
        digitalWrite(dirPinF, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinF, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinF, LOW);
          delayMicroseconds(500);
        }      
        break;
        
      case 'B':
        digitalWrite(dirPinB, HIGH);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinB, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinB, LOW);
          delayMicroseconds(500);
        }      
        break;

      case 'r':
        digitalWrite(dirPinR, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinR, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinR, LOW);
          delayMicroseconds(500);
        }      
        break;
        
      case 'l':
        digitalWrite(dirPinL, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinL, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinL, LOW);
          delayMicroseconds(500);
        }          
        break;
        
      case 'u':
        digitalWrite(dirPinU, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinU, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinU, LOW);
          delayMicroseconds(500);
        }      
        break;
        
      case 'd':
        digitalWrite(dirPinD, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinD, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinD, LOW);
          delayMicroseconds(500);
        }     
        break;
        
      case 'f':
        digitalWrite(dirPinF, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinF, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinF, LOW);
          delayMicroseconds(500);
        }      
        break;
        
      case 'b':
        digitalWrite(dirPinB, LOW);

        for(int i = 0; i < 50; i++){
          digitalWrite(stepPinB, HIGH);
          delayMicroseconds(500);
          digitalWrite(stepPinB, LOW);
          delayMicroseconds(500);
        }      
        break;
      default:
        Serial.print("No se reconoció el movimiento\n");
        break;
    }
    
  }
}