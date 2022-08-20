import math

def Chu_so_tan_cung(a,n):
	luy_thua = int(math.pow(a,n))
	so_tan_cung = int(luy_thua % 10)
	print(luy_thua)
	
a,n = map(int, input().split())
Chu_so_tan_cung(a,n)