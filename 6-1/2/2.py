evenProduct = {}
for i in range(1, 10) :
    list1 = []
    if i % 2 == 0 :
        for j in range(1, 10) :
            list1.append(i*j)
        evenProduct[i] = list1

print(evenProduct)