import kociemba

def areTwoOrPrime(filteredSolve):
    # No sé filtrar ni usar bien Python, feelsBadMan
    print("before filtering " + filteredSolve)
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
    listSol = []
    filteredSolve = sol
    fSolve = areTwoOrPrime(filteredSolve)
    print("Standard output from algorithm " + stdSol)
    print("No whitespace output " + sol)
    print("a continuación se imprimirá la solución filtrada de acuerdo al sketch de Arduino ")
    print("after filtering " + fSolve)
    listSol = list(fSolve)
    print(listSol)

if __name__ == '__main__':
    main()
