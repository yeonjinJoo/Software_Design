import random

hundrednum = []
for i in range(100) :
    hundrednum.append(random.randint(1, 1000))

for i in range(len(hundrednum)) :    
    print(hundrednum[i], end= " ")

def findMax(ls) :
    maxnum = 0
    for i in range(len(ls)) :
        if ls[i] > maxnum :
            maxnum = ls[i]
    return maxnum

def findMin(ls) :
    minnum = 1001
    for j in range(len(ls)) :
        if ls[j] < minnum :
            minnum = ls[j]
    return minnum

print()
print('max value:', findMax(hundrednum))
print()
print('min value:', findMin(hundrednum))

