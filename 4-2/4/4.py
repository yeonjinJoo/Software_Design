n = int(input())
i = 1
j = 0
while i <= n :
    while j < i :
        print("* ", end ="")
        j += 1
    print()
    j = 0
    i += 1