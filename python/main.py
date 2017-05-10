import kociemba
import config
import conns
import solution
#Todo List
#Configurar puertos en Arduino
#comprobar conexion
#set null terminator to solution string
#Solución temporal:
#  Agregar una x al final de la string para que el arduino sepa cuando se termina
#
def main():
    conns.startConnection()
    if(conns.isSerialConnected() is True):
        solution.sendSolution()
    else:
        print("Error")
    #print("Por favor, introduce el estado actual del cubo")



if __name__ == '__main__':
    main()
