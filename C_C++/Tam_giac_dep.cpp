#include <iostream>
using namespace std;

void Tam_giac_vuong_can(unsigned long long n)
{
	cin >> n;
	if(n%3==0)
		cout << "YES";
	else
		cout << "NO";
}
int main()
{
	unsigned long long n;
	Tam_giac_vuong_can(n);
	
}