n1 = int(input())
n2 = int(input())

def add() :
    return (n1 + n2)

def sub() :
    return (n1 - n2)

def mul() : 
    return (n1 * n2)

def div() : 
    return (n1 / n2)

def mod() : 
    return (n1 % n2)

def printMsg() :
    print('sum: ' + str(add()))
    print('difference: ' + str(sub()))
    print('product: ' + str(mul()))
    print('division: ' + str(div()))
    print('remainder: ' + str(mod()))
    print('completed')

printMsg()