def guiThu(Q,k):
    Q = list(Q)
    doDai = len(Q)
    Q1 = Q[0:k]; Q1.reverse();
    Q2 = Q[k:doDai]; Q2.reverse();
    Q = Q1 + Q2
    Q = "".join(map(str,Q))
    print(Q)

Q = str(input())
k = int(input())

guiThu(Q,k)