import time
import config
import conns
import solution

def main():
    conns.startConnection() # Funcion que inicia la conexion serial con el Arduino
    time.sleep(2) # Esperamos 2 segundos para verificar si la conexion funciono
    if(conns.isSerialConnected() == True):
        print("Se mandara la solucion")
        solution.sendSolution()
    else:
        print("Error")

if __name__ == '__main__':
    main()
