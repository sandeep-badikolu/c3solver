import kociemba
import config

def areTwoOrPrime(filteredSolve):
    '''Función que filtra los pasos dobles y primos para facilitar la lectura desde el código ino'''
    filteredSolve = filteredSolve.replace("D2", "DD")
    filteredSolve = filteredSolve.replace("L2", "LL")
    filteredSolve = filteredSolve.replace("R2", "RR")
    filteredSolve = filteredSolve.replace("F2", "FF")
    filteredSolve = filteredSolve.replace("B2", "BB")
    filteredSolve = filteredSolve.replace("U2", "UU")
    filteredSolve = filteredSolve.replace("D'", "d")
    filteredSolve = filteredSolve.replace("L'", "l")
    filteredSolve = filteredSolve.replace("R'", "r")
    filteredSolve = filteredSolve.replace("F'", "f")
    filteredSolve = filteredSolve.replace("B'", "b")
    filteredSolve = filteredSolve.replace("U'", "u")
    filteredSolve += '1'
    return filteredSolve

def getCube():
    '''Func que le pide al usuario que ingrese, si se logra desarollar el reconocimiento por OpenCV se pasará a colors.py'''
    state = input("Ingresa el estado actual del cubo")
    return state

def sendSolution():
    startSol()
    for step in config.listSol:
        bstep = step.encode('ascii')
        config.ser.write(bstep)
        print(bstep)

def startSol():
    '''Inicialización de todas las variables necesarias, antiguio main del archivo. Se hizo función para llamarla desde sendSolution'''
    cube = getCube()
    stdSol = kociemba.solve(cube)
    sol = ''.join(stdSol.split())
    filteredSolve = sol
    config.fSolve = areTwoOrPrime(filteredSolve)
    config.listSol = list(config.fSolve)

if __name__ == '__main__':
    sendSolution()
