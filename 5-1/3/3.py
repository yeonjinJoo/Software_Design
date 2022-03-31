n = int(input())
gMul = 1
def addTotal() :
    sum = 0
    for i in range(1, n+1) :
        sum += i
    return sum

def mulTotal() :
    for i in range(1, n+1) :
       global gMul #global gMul = 이렇게 쓰면 안됨. 여기까지만.
       gMul *= i

print('addTotal(): ' + str(addTotal()))
mulTotal()
print('gMul: ' + str(gMul))

