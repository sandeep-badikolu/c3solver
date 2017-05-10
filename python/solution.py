import kociemba
import config

def areTwoOrPrime(filteredSolve):
    # No sé filtrar ni usar bien Python, feelsBadMan
    #debug print("before filtering " + filteredSolve)
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

def getCube():
    return 'DRLUUBFBRBLURRLRUBLRDDFDLFUFUFFDBRDUBRUFLLFDDBFLUBLRBD'

def main():
    cube = getCube()
    stdSol = kociemba.solve(cube)
    sol = ''.join(stdSol.split())
    filteredSolve = sol
    config.fSolve = areTwoOrPrime(filteredSolve)
    config.listSol = list(config.fSolve)
    config.length = len(config.listSol)
    #Debug
    print("Standard output from algorithm " + stdSol)
    print("No whitespace output " + sol)
    print("a continuación se imprimirá la solución filtrada de acuerdo al sketch de Arduino ")
    print("after filtering " + config.fSolve)
    print(config.listSol)
    print(config.length)

if __name__ == '__main__':
    main()
