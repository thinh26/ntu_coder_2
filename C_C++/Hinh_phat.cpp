#include <iostream>
#include <cmath>
using namespace std;
#define MAX 100

void Hinh_phat(int a[], int n)
{
	int khoang_cach=0;
	for(int i=0;i<n;i++)
	{
		if(a[0]==1)
		{
			if(a[i]==1)
				khoang_cach+=1;
			if(a[i]==2)
				khoang_cach-=1;
		}
		if(a[0]==2)
		{
			if(a[i]==2)
				khoang_cach+=1;
			if(a[i]==1)
				khoang_cach-=1;
		}
	}
	cout << abs(khoang_cach);
}

int main()
{
	int a[MAX];
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	Hinh_phat(a,n);
}