#include <iostream>
using namespace std;

void day_so_fibonacy(int a)
{
	int phan_tu[100];
	int i;
	phan_tu[0]=1; phan_tu[1]=1;
	for(i=2;i<a;i++)
	{
		phan_tu[i]=phan_tu[i-1]+ phan_tu[i-2];
	}
	for(i=0;i<a;i++)
		cout << phan_tu[i] << " ";
}
int main()
{
	int n;
	cin >> n;
	day_so_fibonacy(n);
}