import serial
import config

def startConnection():
    import conns
    config.puerto = input("Por favor, ingrese el puerto en el que está conectado el Arduino (defualt=/dev/ttyUSB0)\n")
    config.puerto = '/dev/tty' + config.puerto # Linux way
    #Si se está en windows, comentar la línea anterior
    config.baudR = input("Ingrese el baud rate deseado, por default es 9600 (enter=default)")
    print("El puerto configurado es: " + config.puerto + "\nY el baud rate: " + config.baudR)

    config.ser = serial.Serial(config.puerto, config.baudR)


def isSerialConnected():
    # Comprobamos que la conexion se haya completado mandando un byte y leyendo la respuesta del Arduino
    # Envíamos un 1
    config.ser.write(b'1')
    s = config.ser.read()
    if(s == b'1'):
        print("Listo...")


# def main():
#     port_and_ser()
#
# if __name__ == '__main__':
#     main()
