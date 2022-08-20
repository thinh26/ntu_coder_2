def Ga_va_cho(n,m):
    c=int((m-(2*n))/2)
    g=int(n-c)
    check1 = g+c
    check2 = (2*g)+(4*c)
    if(g<0 or c<0 or check1!=n or check2!=m):
        print(-1)
    else:
        if((check1==n) & (check2==m)):
            print(g,c,end=" ")

n,m = map(int, input().split())
Ga_va_cho(n,m)