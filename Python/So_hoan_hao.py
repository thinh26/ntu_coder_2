def So_hoan_hao(n):
    tong = 0;
    for i in range(1,n):
        if(n%i==0):
            tong = tong + i;
    if(tong==n):
        print("YES");
    else:
        print("NO");
# main
# n = int(input());
So_hoan_hao(9550336);