num = int(input())

def printLine(n) :
    for i in range(1, n+1) :
        print(i, end = " ")
    print()

for i in range(1, num+1) : 
    printLine(i)

for i in range(num, 0, -1) :
    printLine(i)