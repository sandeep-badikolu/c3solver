# Módulo creado para implementar variables globales de la manera en que la referencia lo indica.
import serial

def port_and_ser:
    puerto = input("Por favor, ingrese el puerto en el que está conectado el Arduino \n")
    puerto = '/dev/tty' + puerto # Linux way
    print("El baud rate por default es 9600")
    #Si se está en windows, comentar la línea anterior
    ser = serial.Serial(puerto, 9600)

port_and_ser()
