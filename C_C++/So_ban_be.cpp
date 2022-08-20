#include <iostream>
using namespace std;

void So_ban_be(int a, int b)
{
	int i,j;
	unsigned long long tong1 = 0, tong2 = 0;
	for(i=1;i<a;i++)
		if(a % i == 0)
			tong1 = tong1 + i;
	for(j=1;j<b;j++)
		if(b % j == 0)
			tong2 = tong2 + j;
	if(tong1 == b && tong2 == a)
		cout << "YES";
	else
		cout << "NO";
}
int main()
{
	int a,b;
	cin >> a >> b;
	So_ban_be(a,b);
}