#include <iostream>
using namespace std;

void nhapMang(int a[], int &n)
{
	int i;
	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];
}
void chiaQua(int a[], int n)
{
	nhapMang(a,n);
	int i;
	int tong = 0;
	int count1=0, count2=0;
	if(n%2!=0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==100)
				count1++;
			if(a[i]==200)
				count2++;
		}
		if(count1==n || count2 ==n)
			cout << "NO";
		else
			pass
	}
	else
	{
		//Cộng toàn bộ các quả táo
		for(i=0;i<n;i++)
		{
			tong = tong + a[i];
		}
		//Nếu tổng là chẵn
		if(tong % 200 == 0)
			cout << "YES";
		//Nếu tổng là lẻ
		else
			cout << "NO";
	}
}
int main()
{
	int n;
	int a[100];
	chiaQua(a,n);
}