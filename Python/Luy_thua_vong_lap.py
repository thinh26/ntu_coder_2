def luyThuaVongLap(x,n):
    result = int(1)
    for i in range(1,n+1):
        result *= x
    return result

def _4SoCuoiVongLap(x,n):
    temp = int(luyThuaVongLap(x,n))
    print(temp % 10000)
    
    

x,n = map(int, input().split())
_4SoCuoiVongLap(x,n)