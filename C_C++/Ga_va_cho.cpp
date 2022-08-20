#include <iostream>
using namespace std;

void ga_va_cho(int n, int m)
{
	int g,c;
	c = (m-(2*n))/2;
	g = n-c;
	if(g>=0 && c>=0 && g+c==n && ((2*g+4*c)==m))
		cout << g << " " << c;
	else
		cout << "-1";
}
int main()
{
	int n,m;
	cin >> n >> m;
	ga_va_cho(n,m);
	return 0;
}