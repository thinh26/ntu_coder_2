def vongTay(n):
    lhand = int()
    rhand = int()
    if((n / 7) % 2 == 0):
        rhand = n % 7
        lhand = 7 - rhand
    else:
        lhand = n % 7
        rhand = 7 - lhand
    print(lhand,rhand,end=" ")

n = int(input())
vongTay(n)