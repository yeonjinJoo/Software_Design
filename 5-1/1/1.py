n = int(input())
def multi (n) :
    for i in range(1, n+1) :
        if(i % 2 ==0 or i % 3 == 0) :
            print(i)
multi(n)
