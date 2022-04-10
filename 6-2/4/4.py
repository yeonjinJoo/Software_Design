import random

print('Input the length of the string : ', end="")
length = int(input())
print('How many times will the mouse eat? : ', end = "")
times = int(input())

alphabets = []
for o in range(97, 123) :
    alphabets.append(chr(o))

def getRandomCheese(leng) :
    alphabetsstr = []
    for i in range(leng) :
        randomnum = random.randint(0, len(alphabets)-1)
        alphabetsstr.append(alphabets[randomnum])

    return ''.join(alphabetsstr)

eaten = []
original = getRandomCheese(length)
original2 = original
current = original

print('Generated Cheese is' + "'"+original +"'")
print()

i = 1
while i <= times and current != '_'*len(original) :
    eat = alphabets[random.randint(0, len(alphabets)-1)]
    while eat in eaten :
        eat = alphabets[random.randint(0, len(alphabets)-1)]
    eaten.append(eat)
    print('Start eating '+"'"+eat+"'")
    print('Eaten alphabet of cheese : ', end="")

    for j in eaten :
        print(j, end = " ")
    print()
    print('Original cheese : '+"'"+original+"'")

    for k in range(len(original)) :
        if eat in original[k] :
            current = original2[:k] + "_" + original2[k+1:]
            original2 = current
    print('Currnet cheese status : ' + "'" + current)
    print()
    i += 1

if i < times :
    while( i <=times) :
        eat = alphabets[random.randint(0, len(alphabets)-1)]
        while eat in eaten :
            eat = alphabets[random.randint(0, len(alphabets)-1)]
        eaten.append(eat)
        print('Start eating ' +"'" + eat +"'")
        print('Out of cheese!')
        print()
        i += 1
else :
    print('Finally remaind Cheese Status : ')
    print('Eaten alphabet of cheese : ',end ="")
    for h in eaten :
        print(h, end = " ")
    print()
    print('Original cheese : ' +"'" + original+"'")
    print('Current cheese status : '+"'"+current+"'")



