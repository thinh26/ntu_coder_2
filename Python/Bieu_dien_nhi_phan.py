def Bieu_dien_nhi_phan(n): 
    _binary = [0] * 100;
    temp = int(n);
    i = int(0)
    count = int(0);
    while(temp!=0):
        if(temp%2==0):
            _binary[i]=0
        else:
            _binary[i]=1;
        temp /= 2
        i+=1;
    print(_binary)

n = 29;
Bieu_dien_nhi_phan(29)