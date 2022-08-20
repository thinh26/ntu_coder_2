#include <iostream>
using namespace std;

#define max 100000

void nhapMang(unsigned long long a[], int &n)
{
	cin >> n;
	int i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
}
/* Quick sort*/
void swap(unsigned long long &a, unsigned long long &b)
{
	unsigned long long temp;
	temp = a;
	a = b;
	b = temp;
}

void partitionSort(unsigned long long a[], int first, int last)
{
	if(first>=last)
		return;
	unsigned long long X = a[(first+last)/2];
	int i = first;
	int j = last;
	do
	{
		while(a[i]<X)
			i++;
		while(a[j]>X)
			j--;
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	while(i<=j);
	partitionSort(a,first,j);
	partitionSort(a,i,last);
}

void quickSort(unsigned long long a[], int n)
{
	partitionSort(a,0,n-1);
}
/* Hàm chính */
void capSoBangNhau(unsigned long long a[], int n)
{
	nhapMang(a,n);
	quickSort(a,n);
	unsigned long long count = 0;
	for(int i=0;i<n;i++)
		cout << a[i] <<  " ";
//	for(int i=0;i<n;i++)
//		for(int j=i+1;j<n;j++)
//			if(a[i]==a[j])
//				count++;
//	cout << count;
}
int main()
{
	int n;
	unsigned long long a[max];
	capSoBangNhau(a,n);
}