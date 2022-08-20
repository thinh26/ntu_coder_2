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
void Trao_doi(unsigned long long &first, unsigned long long &second)
{
	unsigned long long temp = first;
	first = second;
	second = temp;
}
int phan_doan(unsigned long long b[MAX], unsigned long long start, unsigned long long end)
{
	int phan_tu_duoc_chon = b[end];
	int left = start;
	int right = end - 1;
	while(true)
	{
		while(left <= right && b[left] < phan_tu_duoc_chon)
			left++;
		while(right >= left && b[right] > phan_tu_duoc_chon)
			right--;
		if(left >= right)
			break;
		Trao_doi(b[left],b[right]);
		left++;
		right--;
	}
	Trao_doi(b[left],b[end]);
	return left;
}
void Quick_sort(unsigned long long b[MAX], unsigned long long start, unsigned long long end)
{
	if(start<end)
	{
		unsigned long long position = phan_doan(b,start,end);
		
		Quick_sort(b,start,position-1);
		Quick_sort(b,position+1,end);
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
	Quick_sort(b,0,n-1);
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