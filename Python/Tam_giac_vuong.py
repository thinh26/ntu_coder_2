def Tam_giac_vuong(n):
    i=n
    for i in range(i,0,-1):
        for j in range(1,i+1,+1):
            print("*",end="")
        print()
#main
canh=int(input())
Tam_giac_vuong(canh)