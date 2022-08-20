#include <iostream>
#include <cstring>
using namespace std;

void guiThu(string &Q, int &k)
{
	cin >> Q >> k;
	int doDai = Q.length();
	for(int i=k-1;i>=0;i--)
		cout << Q[i];
	for(int i=doDai-1;i>=k;i--)
		cout << Q[i];
}

int main()
{
	string Q;
	int k;
	guiThu(Q,k);
}