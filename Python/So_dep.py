def So_dep(n):
    n = list(n)
    do_dai = len(list(n))
    nice = 0
    for i in range(0,do_dai):
        n[i] = int(n[i])
        nice = nice + n[i]
    if(nice % 10 == 9):
        print("YES")
    else:
        print('NO')


n = input()
So_dep(n)