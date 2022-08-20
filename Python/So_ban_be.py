def So_ban_be(a,b):
    tong1 = int();
    tong2 = int();
    for i in range(1,a,+1):
        if(a%i==0):
            tong1 = tong1 + i;
    for j in range(1,b,+1):
        if(b%j==0):
            tong2 = tong2 + j;

    """ Sau khi tính xong, ép kiểu từ số nguyên sang giá trị chuỗi"""       
    tong1 = str(tong1); tong2 = str(tong2)
    a = str(a); b = str(b)
    sbb1 = "{0}".format(tong1) # Format: Định dạng lại số, tránh 10.000000000000001
    sbb2 = "{0}".format(tong2)
    
    if(sbb1 == b):
        if(sbb2 == a):
            print("YES");
        else:
            print("NO");
    else:
        print("NO")

#main
a,b = map(int, input().split());
So_ban_be(a,b);