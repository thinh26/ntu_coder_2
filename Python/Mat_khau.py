"""import array
n = input()
amount = len(n)
arr = array.array('i')
for i in range(0,amount):
    arr[i] = n[i] - '0'
for i in range(0,amount):
    print(arr[i])

"""
# Python code to convert string to list character-wise
"""import string
def Convert(string):
	arr=[]
	arr[:0]=string
	return arr
# Driver code
n="2345"
convert_arr = Convert(n)
mk = str()
for i in range(0,len(convert_arr)):
    mk = mk + convert_arr[i]
print(mk)"""

import math
def Mat_khau(n):
    n = list(n)
    do_dai = len(list(n))
    mk = 0
    for i in range(0,do_dai):
        n[i] = int(n[i])
        mk = mk + n[i]
    print(mk)


n = input()
Mat_khau(n)