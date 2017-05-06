import kociemba
import serial
import config

# Todo List

#

def con_serial():
    # Esta función ejecuta la conexión serial con el arduino, la comprueba
    print("El puerto configurado es: " + config.puerto)
    #pOpcion = input("¿Continuar? (y/n)")
    config.ser = serial.Serial(config.puerto, 9600) # Esto iniciará la conexión serial con el arduino en un baud rate de 9600
    # La conexión puede ser por USB si el arduino está conectado, o por bluetooth, eso depende del puerto que se especifique

    # Comprobamos que la conexion se haya completado mandando un byte y leyendo
    # Envíamos un 1
    ser.write(b'1')


def main():
    config.port_and_ser()
    print("Por favor, introduce el estado actual del cubo")



if __name__ == '__main__':
    main()
