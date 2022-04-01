def problemDescription() :
    print('* Number of divisors *')
problemDescription()

print('Type the first number:')
n1 = int(input())
print('Type the second number:')
n2 = int(input())

def getNumOfDivisors(number) :
    numD = 0
    for i in range(1, number+1) :
        if(number % i == 0) :
            numD += 1
    return numD

print('Number of divisors of the first number is', getNumOfDivisors(n1))
print('Number of divisors of the second number is', getNumOfDivisors(n2))
