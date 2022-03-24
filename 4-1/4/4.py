from re import I


n = int(input())
i = 1
while i < 10 :
    product = n * i
    print(str(n) + "*" + str(i) + "=" + str(product))
    i += 1
