import serial
import config

def startConnection():
    import conns
    config.puerto = input("Por favor, ingrese el puerto en el que esta conectado el Arduino\n")
    config.ser = serial.Serial(config.puerto, config.baudR)
    print("El puerto configurado es: " + config.puerto + "\nY el baud rate: " + config.baudR)


def isSerialConnected():
    s = config.ser.readline()
    if(s == b'1\r\n'):
        return True
    else:
        return False

### DEBUG ###
def main():
    startConnection()
    cfg = isSerialConnected()
    if(cfg is True):
        print("Se conecto")
    else:
        print("Hubo un fallo, no se pudo conectar")

if __name__ == '__main__':
    main()
