def demTu(tu):
    tu = list(tu)
    doDai = len(tu)
    count = int(0)
    print(doDai)
    for i in range(0,doDai):
        for j in range(i+1,doDai):
            if(tu[i]=='.'):
                if(tu[j]!='.'):
                    count+=1
    if(tu[:1]=="."):
        if(tu[:-1]=="."):
            count-=1
    if(tu[:1]!="."):
        if(tu[:-1]!="."):
            count+=1
    print(count)

tu = str(input())
demTu(tu)