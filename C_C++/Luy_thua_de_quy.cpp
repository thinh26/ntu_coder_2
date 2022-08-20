#include <iostream>
using namespace std;

unsigned long long luyThuaDeQuy(int x, int n)
{
	if(n==1)
		return x;
	else
		return x * luyThuaDeQuy(x,n-1);
}
void _4SoCuoiDeQuy(int &x, int &n)
{
	cin >> x >> n;
	unsigned long long temp = luyThuaDeQuy(x,n) % 10000;
	cout << temp;
}
int main()
{
	int x,n;
	_4SoCuoiDeQuy(x,n);
}