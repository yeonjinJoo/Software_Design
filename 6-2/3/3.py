sentence = input()
words = sentence.split()
realwords = {}

for i in words :
    if i in realwords :
        realwords[i] += 1
    else :
        realwords[i] = 1

for key, value in realwords.items() :
    print(key, ":", value)