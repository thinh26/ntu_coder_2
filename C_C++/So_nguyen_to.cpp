#include <iostream>
#include <cmath>
using namespace std;

void soNguyenTo(unsigned long long n)
{
	unsigned long long i;
	int count = 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			count++;
	}
	if(count==0)
		cout << "YES";
	else
		cout << "NO";
}

int main()
{
	unsigned long long n;
	cin >> n;
	if(n==1)
		cout << "NO";
		else if(n==2 || n==3)
			cout << "YES";
	else
		soNguyenTo(n);
	return 0;
}