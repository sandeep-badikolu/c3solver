# This Python file uses the following encoding: utf-8
import config

def areTwoOrPrime(filteredSolve):
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
    return filteredSolve

def sendSolution():
    startSol()
    for step in config.listSol:
        config.ser.write(step)
        print(step)

def startSol():
    stdSol = input("Ingrese la solución generada por Cube Explorer: \n")
    sol = ''.join(stdSol.split())
    filteredSolve = sol
    config.fSolve = areTwoOrPrime(filteredSolve)
    config.listSol = list(config.fSolve)
    # Trigger para que la máquina inicie los movimientos
    config.listSol.append("1")

if __name__ == '__main__':
    sendSolution()
