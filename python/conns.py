import serial
import config

def port_and_ser():
    import conns
    config.puerto = input("Por favor, ingrese el puerto en el que está conectado el Arduino \n")
    config.puerto = '/dev/tty' + config.puerto # Linux way
    #Si se está en windows, comentar la línea anterior
    config.baudR = input("Ingrese el baud rate deseado, por default es 9600 (1=default)")
    if config.baudR == '1':
        config.baudR = '9600'
    print("El puerto configurado es: " + config.puerto + "\nY el baud rate: " + config.baudR)

    config.ser = serial.Serial(config.puerto, config.baudR)

def main():
    port_and_ser()

if __name__ == '__main__':
    main()
