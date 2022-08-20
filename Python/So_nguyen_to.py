from math import sqrt

def soNguyenTo(n):
    count = int(0)
    canBacHai = int(sqrt(n))
    for i in range(2,canBacHai+1,1):
        if(n%i==0):
            count+=1
    if(count==0):
        print("YES")
    else:
        print("NO")

n = int(input())
if(n==1):
    print("NO")
elif(n==2 or n==3):
    print("YES")
else:
    soNguyenTo(n)
