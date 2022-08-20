#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

unsigned long long i;

void Nhap_mang(unsigned long long a[], int &n)
{
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
}
void Palindrome(unsigned long long a[], int n)
{
	Nhap_mang(a,n);
	int i;
	string str, str0, str1;
	for(i=0;i<n;i++)
	{
		str = to_string(a[i]);
		str0 = str;
		reverse(str0.begin(),str0.end());
		str1 = str0;
		if(str1 == str)
			cout << str << " ";
	}
}
int main()
{
	unsigned long long a[1000];
	int n;
	Palindrome(a,n);
}