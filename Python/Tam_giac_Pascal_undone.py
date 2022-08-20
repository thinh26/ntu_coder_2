# Lam viec voi mang 2 chieu

# m = int(input("Nhap m = "))
# n = int(input("Nhap n = "))

# a = []

# for i in range(0, m):
#     a.append([])
#     for j in range(0, n):
#         x = float(input("Nhap phan tu thu a[%2d][%2d]: " % (i+1, j+1)))
#         a[i].append(x)

# print("Day so vua nhap la: ")
# for i in range(0, m):
#     for j in range(0, n):
#         print("%3d " % a[i][j], end='')
#     print()

"""
# Cách 2:
print("Day so vua nhap la: ")
print(a)
"""


def tamgiacPascal(arr,n):
    i=int()
    j=int()
    for i in range(0,n):
        for j in range(0,n+1):
            arr[i][0] = arr[i][i] = 1
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j]

    for i in range(0,n):
        for j in range(0,n+1):
            print(arr[i][j])
        print()
        
n=int(input())
row,col = (n, n)
arr = [[0]*col]*row
tamgiacPascal(arr,n)