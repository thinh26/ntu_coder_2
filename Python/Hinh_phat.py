def Hinh_phat(arr):
    buoc = int(0)
    for i in range(0,n):
        arr[i] = int(arr[i])
        if(arr[0]==1):
            if(arr[i]==1):
                buoc = buoc + 1
            if(arr[i]==2):
                buoc = buoc - 1
        if(arr[0]==2):
            if(arr[i]==2):
                buoc = buoc + 1
            if(arr[i]==1):
                buoc = buoc - 1
    print(abs(buoc))

n = int(input())
arr = [0] * n
arr = input().split()
Hinh_phat(arr)