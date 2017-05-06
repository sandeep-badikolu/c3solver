import kociemba
import config
import conns

# Todo List

#

def isSerialConnected():
    # Comprobamos que la conexion se haya completado mandando un byte y leyendo la respuesta del Arduino
    # Envíamos un 1
    config.ser.write(b'1')


def main():
    conns.port_and_ser()
    print(config.ser)
    #isSerialConnected()
    #print("Por favor, introduce el estado actual del cubo")



if __name__ == '__main__':
    main()
