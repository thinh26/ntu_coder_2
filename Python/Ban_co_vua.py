def Ban_co_vua(n):
    for i in range(0,n):
        for j in range(0,n):
            if((i+j)%2 == 0):
                print("W",end="")
            else:
                print("B",end="")
        print(end="\n")
#main
n= int(input())
Ban_co_vua(n)