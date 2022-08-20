def palindrome(a,n):
    a = input().split()
    for i in range(0,n,1):
        temp = a[i]
        temp1 = temp [::-1]; """Đảo ngược chuỗi"""
        if(temp == temp1):
            print(temp, end=" ")

n = int(input())
a = [0] * n
palindrome(a,n)