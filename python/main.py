import kociemba
import time
import config
import conns
import solution

def main():
    conns.startConnection()
    time.sleep(2)
    if(conns.isSerialConnected() == True):
        solution.sendSolution()
        begin = input("¿Desea que arduino empiece a hacer los movimientos?")
        if(begin == 'si'):
            config.ser.write(b'1')
        else:
            pass
    else:
        print("Error")

if __name__ == '__main__':
    main()
