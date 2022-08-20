def uocSoChungLonNhat(a,b):
    a,b = map(int, input().split())
    
    a = a if a>0 else -a
    b = b if b>0 else -b
    
    while(a!=b):
        if a>b:
            a-=b
        else:
            b-=a
    print(a)
    
a=int()
b=int()
uocSoChungLonNhat(a,b)