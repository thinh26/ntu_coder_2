#include <iostream>
using namespace std;

void Ban_co_vua(int &n)
{
	cout << "Nhap n: ";
	cin >> n;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i+j)%2==0)
				cout << "W";
			else
				cout << "B";
		}
		cout << endl;
	}
}

int main()
{
	int n;
	Ban_co_vua(n);
}