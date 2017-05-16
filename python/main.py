import kociemba
import time
import config
import conns
import solution

def main():
    conns.startConnection() # Función que inicia la conexion serial con el Arduino
    time.sleep(4) # Esperamos 4 segundos para verificar si la conexion funcionó
    if(conns.isSerialConnected() == True): 
        solution.sendSolution()
    else:
        print("Error")

if __name__ == '__main__':
    main()
