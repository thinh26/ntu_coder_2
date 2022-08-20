#include <iostream>
#include <cmath>
using namespace std;

void Chu_so_tan_cung(int a, int n)
{
	unsigned long long luy_thua = pow(a,n);
	unsigned long long so_tan_cung = luy_thua % 10;
	cout << so_tan_cung;
}
int main()
{
	int a, n;
	cin >> a >> n;
	Chu_so_tan_cung(a,n);
}