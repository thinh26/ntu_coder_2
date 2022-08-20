def luyThuaDeQuy(x,n):
    result = int()
    if(n==1):
        return x
    else:
        return (x * luyThuaDeQuy(x,n-1))

def _4SoCuoiDeQuy(x,n):
    temp = int(luyThuaDeQuy(x,n))
    print(temp % 10000)
    
    

x,n = map(int, input().split())
_4SoCuoiDeQuy(x,n)