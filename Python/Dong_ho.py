def Dong_ho(h,p,s):
    if(p==59 & s==59):
        if(h==23):
            h=p=s=0
        else:
            h+=1
            p=0
            s=0
    elif(p<59 & s==59):
        s=0;
        p+=1
    else:
        s+=1
    print(h,p,s,end=" ")

h,p,s = map(int, input().split())
Dong_ho(h,p,s)