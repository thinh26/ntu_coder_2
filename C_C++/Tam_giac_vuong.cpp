#include <iostream>
using namespace std;

void Tam_giac_vuong()
{
	int n;
	cin >> n;
	for(int i = n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		cout << "*";
	cout <<"\n";
	}
}
int main()
{
	Tam_giac_vuong();
}