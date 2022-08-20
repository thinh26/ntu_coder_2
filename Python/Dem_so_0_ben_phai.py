def Giai_thua(n):
    _factorial = int(1)
    for i in range(1,n+1):
        _factorial = _factorial *i
    return _factorial

"""
# ! Chỉ chạy được đến 996 là tối đa
def Giai_thua(n):
    if(n==1):
        return 1
    else:
        return n*Giai_thua(n-1)
"""
def Dua_giai_thua_vao_mang(n):
    Ket_qua = int(Giai_thua(n))
    Ket_qua = str(Ket_qua)
    Ket_qua = list(Ket_qua)
    return Ket_qua

def Dem_so_0_ben_phai(n):
    So_can_dem = Dua_giai_thua_vao_mang(n)
    So_can_dem.reverse()
    Luong_phan_tu = len(So_can_dem)
    Luong_so_0_ben_phai = int(0)
    for i in range(0,Luong_phan_tu,+1):
        So_can_dem[i] = int(So_can_dem[i])
        if(So_can_dem[i]==0):
            Luong_so_0_ben_phai+=1
        if(So_can_dem[i]!=0):
            break
    print(Luong_so_0_ben_phai)
    
n=int(input())
print(Giai_thua(n))
Dem_so_0_ben_phai(n)