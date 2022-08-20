#include<iostream>
using namespace std;
#define MAX 500000
#define ull unsigned long long

void giaiThua(int number) 
{ 
    int array[MAX],i,j,m=1;
    ull r = 0, q;
    array[0] = 1;
    for(i=2;i<=number;i++)
    {
        for(j=0;j<m;j++)
        {
            q=r;
            r = (array[j]*i+r)/10;
            array[j] = (array[j]*i+q)%10;
        }
        while(r>0)
        {
            array[m] = r % 10;
            m++;
            r = r / 10;
        }
    }
    /*
    //* Đếm số không bên phải
    */
    int count = 0;
    for(i=0;i<sizeof(array);i++)
    {
        if(array[i] == 0)
            count++;
        else
            break;
    }
    cout << count;
}
  	
int main() 
{	
	int number;
	cin >> number;
	giaiThua(number);
	return 0;
}
