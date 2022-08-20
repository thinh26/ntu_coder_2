#include <iostream>
using namespace std;

void soDacBiet(unsigned long long &n)
{
	cin >> n;
	unsigned long long temp = 0;
	int tong = 0;
	temp = n;
	while(temp!=0)
	{
		tong = tong + (temp % 10);
		temp = temp/10;
	}
	(n % tong == 0) ? cout << 1 : cout << 0;
}

int main()
{
	unsigned long long n;
	soDacBiet(n);
}