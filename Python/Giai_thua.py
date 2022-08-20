def Giai_thua(n):
    gt = 1;
    for i in range(1,n+1):
        gt = gt * i
    print(gt)

"""
#Day la de quy nhung chay duoc den giai thua cua so 996 la toi da
def Giai_thua(n):
    if(n==1):
        return 1
    else:
        return n*Giai_thua(n-1)
"""

n = int(input())
Giai_thua(n)
