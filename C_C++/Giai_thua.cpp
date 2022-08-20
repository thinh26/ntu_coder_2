#include <iostream>
using namespace std;

void Giai_thua(unsigned long long a)
{
	unsigned long long i, giai_thua = 1;
	for(int i=1;i<=a;i++)
		giai_thua = giai_thua * i;
	cout << giai_thua;
}

int main()
{
	unsigned long long n;
	cin >> n;
	Giai_thua(n);
}