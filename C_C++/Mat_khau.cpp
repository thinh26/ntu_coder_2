#include <iostream>
#include <cstring>
using namespace std;

void Mat_khau(int arr[], int amount)
{
	int pass = 0;
	for(int i=0;i<amount;i++)
		pass = pass + arr[i];
	cout << pass;
}
/*
void Mat_khau(unsigned long long n)
{
	unsigned long long code = n, temp = 0;
	int pass = 0;
	int i;
	do
	{
		temp = code % 10;
		pass = pass + temp;
		code = code / 10;
	}
	while(temp!=0);
	cout << pass;
}
*/
int main()
{
	
	string n;
	cin >> n;
	int amount = n.length();
	int arr[amount];
	for(int i=0;i<amount;i++)
		arr[i]=n[i]-'0';
	Mat_khau(arr,amount);
}