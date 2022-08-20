#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define MAX 100000

void Nhap_mang(unsigned long long a[MAX], unsigned long long &n, unsigned long long &k)
{
	cin >> n >> k;
	unsigned long long i;
	for(i=0;i<n;i++)
		cin >> a[i];	
}
void Xuat_mang(unsigned long long b[MAX], unsigned long long n)
{
	unsigned long long j;
	for(j=0;j<n;j++)
		cout << b[j] << " ";	
	cout << endl;
}
void Sap_xep_tu_be_den_lon(unsigned long long b[MAX], unsigned long long n)
{
	unsigned long long temp = 0, i, j;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{
			if(b[i] > b[j])
			{
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
}
void Chia_lay_du(unsigned long long a[MAX], unsigned long long b[MAX], unsigned long long n, unsigned long long k)
{
	unsigned long long i,j,temp=0;
	int mod, count=0;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
		{
			mod = a[i] % k;
			b[j] = mod;
		}
	Xuat_mang(b,n);
	Sap_xep_tu_be_den_lon(b,n);
	Xuat_mang(b,n);
	for(j=0;j<n;j++)
		if(b[j]==b[j+1])
			count++;
	cout << n-count;
}
int main()
{
	unsigned long long a[MAX], b[MAX], n, k;
	Nhap_mang(a,n,k);
	Chia_lay_du(a,b,n,k);
	return 0;
}