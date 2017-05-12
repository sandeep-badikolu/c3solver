import kociemba
import config
import conns
import solution

def main():
    conns.startConnection()
    if(conns.isSerialConnected() == True):
        solution.sendSolution()
    else:
        print("Error")

if __name__ == '__main__':
    main()
