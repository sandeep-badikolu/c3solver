import kociemba
import config
import conns
import solution

def main():
    conns.startConnection()
    conns.isSerialConnected()
    solution.sendSolution()
    #print("Por favor, introduce el estado actual del cubo")



if __name__ == '__main__':
    main()
